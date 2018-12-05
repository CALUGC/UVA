#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int count;
	scanf("%d",&count);
	for (int i = 0; i < count; ++i)
	{
		printf("Case %d: ",i+1);
		int alpha[123]={0}; //各字符計數器
		char array[2000];
		scanf("%s",array);
		bool empty=1;//確認此測資是否無東西，只要有東西馬上切成0
		//printf("%s\n",array );

		for (int i = 0; i < strlen(array); ++i)
		{
			alpha[array[i]]++;
		}

		for (int i = 48; i < 123; ++i)
		{
			if(alpha[i]>1){

				bool check=1;  //check=1代表數量是質數,下面判斷式是刪去法
				for (int j = 2; j <= pow(alpha[i],0.5); ++j)
				{
					//printf("%dalpha[i]  %dj\n",alpha[i] ,j);
					if(alpha[i]%j==0&&j!=alpha[i]){
						check=0;
						//printf("%d,alpha[i] ,%di  %dj\n",alpha[i],i,j );
					}
				}
				if(check==1){
					empty=0;
					printf("%c",i );
				}
			}
		}
		if(empty)
			printf("empty");
		printf("\n");
	}
	return 0;
}