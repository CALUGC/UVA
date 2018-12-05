#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b;
	/*int a[10000],b[10000];
	int ki;//偵測有幾組測資
	for (int k = 0; ; ++k)
	{
		scanf("%d %d",&a[k],&b[k]);
		if(a[k]==0&&b[k]==0){
			ki=k;					//將測資次數存進ki
			break;
		}
	}*/
	//printf("%d\n",ki );

	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0) break;
		int aa[10]={0},ba[10]={0},ac=0,bc=0;
		for (int i = 0; ; ++i) //把a[i]輸入陣列
		{
			if(a>=1){
				aa[i]=a%10;
				a/=10;
				ac++;
				//printf("%dac\n",a );

			}
			else
				break;
		}
		//printf("%dac\n",ac );
		
		for (int i = 0; ; ++i) //把b[i]輸入陣列
		{
			if(b>=1){
				ba[i]=b%10;
				b/=10;
				bc++;


			}
			else
				break;
		}
		//printf("%dbc\n",bc );
		
		int fc=0;			//用來計數有沒有進位
		int count=ac<bc?bc:ac;
		for (int i = 0; i <count; ++i)
		{
			if(aa[i]+ba[i]>=10){
				aa[i+1]++;
				fc++;
				//printf("%di\n",i );
			}
		}
		//printf("%dans\n",fc );
		
		if(fc==0){
			printf("No carry operation.\n");
		}
		else if(fc==1){
			printf("1 carry operation.\n");
		}
		else
			printf("%d carry operations.\n",fc);

		/*int temp;
		for (int i = 0; i < ac/2; ++i) //顛倒數字
		{
			temp=aa[i];
			aa[i]=aa[ac-i-1];
			aa[ac-i-1]=temp;
		}*/
		
	}
	//printf("\n");
	return 0;
}