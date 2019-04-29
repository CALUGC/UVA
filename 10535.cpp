#include <bits/stdc++.h>

#define maxn 500
const double eps = 1e-9;
const double pi = acos(-1.0);
using namespace std;

int dots,m;
double sniper[2];
struct point
{
	double x1;
	double x2;
	double y1;
	double y2;
}dot[maxn];

struct state
{
	double angle;
	int status;
}sta[2*maxn];

bool cmp(const state &a, const state &b){
	if(fabs(a.angle-b.angle)>eps)
		return a.angle < b.angle;
	return a.status > b.status;

}

void store(){

	m=0;

	for (int i = 0; i < dots; ++i)
	{
		double l=atan2(dot[i].y1,dot[i].x1);
		double r=atan2(dot[i].y2,dot[i].x2);
		//printf("y1==%lf x1==%lf l==%lf r==%lf\n",dot[i].y1,dot[i].x1,l,r );
		if(l>r)	swap(l,r);
		if (r - l >= pi){
			sta[m].angle = -pi;
			sta[m++].status = 1;
			sta[m].angle = l;
			sta[m++].status = -1;
			l = r;
			r = pi;
		}
		sta[m].angle = l;
		sta[m++].status = 1;
		sta[m].angle = r;
		sta[m++].status = -1;
		
	}
	sort(sta,sta+m,cmp);

}

int inp(){
	while(scanf("%d",&dots)&&dots){
		
		for (int i = 0; i < dots; ++i)
		{
			scanf("%lf %lf %lf %lf",&dot[i].x1,&dot[i].y1,&dot[i].x2,&dot[i].y2);
		}
		scanf("%lf %lf",&sniper[0],&sniper[1]);

		for (int i = 0; i < dots; ++i)
		{
			dot[i].x1-=sniper[0],dot[i].x2-=sniper[0];
			dot[i].y1-=sniper[1],dot[i].y2-=sniper[1];
		}

		store();

		return 1;
	}
	return 0;
}

int solve(){
	int tem_ans=0,ans=-1000000;
	for (int i = 0; i < m; ++i)
	{
		tem_ans+=sta[i].status;
		ans=max(ans,tem_ans);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	while(inp()){
		printf("%d\n",solve()); 
	}
	return 0;
}

