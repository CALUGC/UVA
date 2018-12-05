#include <stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	long long int in,fl;
	while (scanf("%lld",&in)!=EOF){
		fl=(in+1)*(in+1)/4;
		//printf("%lld\n",fl);

		printf("%lld\n",6*fl-9);

	
	}
	return 0;
}