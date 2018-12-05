#include <stdio.h>

int main(int argc, char const *argv[])
{
	int strat,first,second,third;
	while(scanf("%d %d %d %d",&strat,&first,&second,&third)){
		if((strat==0&&first==0)&&(second==0&&third==0)) break;
		int ans=120;
		if(strat-first<0)
			ans+=40;
		ans+=strat-first;
		if(second-first<0)
			ans+=40;
		ans+=second-first;
		if(second-third<0)
			ans+=40;
		ans+=second-third;

		printf("%d\n",ans*9 );



	}
	return 0;
}