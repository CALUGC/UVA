#include <iostream> 
#include <stdio.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n[100];
	int a[100][50];
	int pi;


	for (int i = 0; i < 100; ++i)
	{
		while(scanf("%d",&n[i])){
			if(n[i]!=0){
				
				for (int j = 0; j <n[i]; ++j)
				{
				scanf("%d",&a[i][j]);

				}
				i++;
				pi++;
				//printf("%dc\n",n[i] );
			

			}
			else{
				//printf("%d\n",n[i] );
				break;
			}
			
		}

		break;
	}
	//printf("%d\n",pi);


	//printf("%d\n",a[0][0] );
	//printf("%d\n",a[0][1] );
	//printf("%d\n",a[0][2] );
	//printf("%d\n",n[0] );

	int sum[pi]={0};
	int av[pi];
	int ans[pi]={0};
	for (int i = 0; i <pi; ++i)
	{
		//printf("%d\n",n[i]);
		for (int j = 0; j <n[i]; ++j)
			{
				sum[i]+=a[i][j];
				//printf("%dtest\n",a[i][j]);

			}
		av[i]=sum[i]/n[i];


			//printf("%dc\n",av[i] );
		for (int k = 0; k < n[i]; ++k)
		{

			ans[i]+=(av[i]>a[i][k]?av[i]-a[i][k]:a[i][k]-av[i]);
		}
		
	}
	//printf("%d%dsum\n",sum[0],sum[1]);
	//printf("%d%d\nans",ans[0],ans[1]);
	for (int i = 0; i < pi; ++i)
	{
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",i+1,ans[i]/2);
	}

	return 0;
}