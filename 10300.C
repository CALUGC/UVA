#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;//測資數量
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		int nsum=0;
		int farmer_count;
		scanf("%d" ,&farmer_count);
		for (int j = 0; j < farmer_count; ++j)
		{
			int range,animal,level;
			scanf("%d %d %d",&range,&animal,&level);
			nsum+=range*level;
		}
		printf("%d\n",nsum);
	}
	return 0;
}