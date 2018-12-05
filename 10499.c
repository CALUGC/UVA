#include <stdio.h>

int main(int argc, char const *argv[])
{
	long long int in=0;
	while(scanf("%lld",&in)){
		if(in<0) break;
		if(in==1)
			printf("0%%\n");
		else
		printf("%lld%%\n",in*25 );
	}
	return 0;
}