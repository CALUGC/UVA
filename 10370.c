#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num,q;
	scanf("%d",&q);
	for (int j = 0; j < q; ++j)
	{
		
		scanf("%d",&num);
		int students[num],sum=0;
		//printf("%d\n",num );
		for (int i = 0; i < num; ++i)
		{
			scanf("%d",&students[i]);
			sum+=students[i];
		}
		
		float average=(float)sum/(float)num;
		int count=0;
		for (int i = 0; i < num; ++i)
		{
			if(average<students[i]) count++;
		}
		//printf("%dcount,%dnum\n",count,num );
		float ans=(float)count/(float)num;
		printf("%.3f%%\n",ans*100 );
	}
	return 0;
}