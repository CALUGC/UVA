#define DEBUG
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count;
	scanf("%d",&count);
	//int s;
	#ifdef DEBUG
		printf("%d\n",count );
	#endif
	long long int s;
	for (int i = 0; i < count; ++i)
	{
		
		scanf("%lld",&s);
		
		s=(s+1)*(s+1)-1;

		printf("%lld\n",s );
	}
	return 0;
}