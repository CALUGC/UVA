#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count,a,b;
	scanf("%d",&count);
	for (int i = 0; i < count; ++i)
	{
		scanf("%d %d",&a,&b);
		if(a%2==0)
			a++;
		if(b%2==0)
			b--;

		printf("Case %d: %d\n",i+1,(a+b)/2*((b-a)/2+1) );
	}
	return 0;
}