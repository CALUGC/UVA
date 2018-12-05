#include <stdio.h>
#include <math.h>
#include <iostream>

int main(int argc, char const *argv[])
{
	int q;
	scanf("%d",&q);
	int in[q];
	for (int k = 0; k <q; ++k)
	{
		scanf("%d",&in[k]);
		int total_count=1;
		restrat:
		int inarray[10]={0};
		int counter=0;
		unsigned int savein=in[k];
		for (int i = 0; i < 10; ++i)
		{
			if(in[k]>=1){
				inarray[i]=in[k]%10;
				in[k]/=10;
				counter++;
			}
			else
				break;
		}
		/*for (int i = 0; i < counter; ++i) //檢測數字是否存入陣列
		{
			printf("%d\n",inarray[i]);
		}*/
		unsigned int reverse=0;
		for (int i = 0; i < counter; ++i) //將原輸入做倒數處理
		{
			reverse+=inarray[i]*pow(10,counter-i-1);
		}
		//printf("%dreverse\n%dsavein\n",reverse,savein );
		unsigned int sum=savein+reverse;
		int sum_array[10]={0},sum_counter=0;
		unsigned int sumsave=sum;
		//printf("%dsum\n",sum);
		for (int i = 0; i < 10; ++i)
		{
			if(sum>=1){
				sum_array[i]=sum%10;
				sum/=10;
				sum_counter++;
			}
			else
				break;
		}
		//printf("%dsum_counter\n", sum_counter);
		bool next=true;
		for (int i = 0; i < sum_counter/2; ++i)
		{
			if(sum_array[i]!=sum_array[sum_counter-i-1]){
				//printf("sum_array[%d]=%d,sum_array[%d]=%d\n",i,sum_array[i],sum_counter-1,sum_array[sum_counter-1]);
				next=false;
				break;
			}
		}
		//printf("%u\n",sumsave );
		if(next==true){
			printf("%d %u\n",total_count,sumsave);
		}
		else{
			total_count++;
			in[k]=sumsave;
			goto restrat;
		}

	}
	return 0;
}