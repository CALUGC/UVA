#include <cstdio>

int main(int argc, char const *argv[])
{
	long long int one,two;
	while(~scanf("%lld %lld",&one,&two)){
		
		long long int answer=one>two?one-two:two-one;
		printf("%lld\n",answer );
	}
return 0;
}