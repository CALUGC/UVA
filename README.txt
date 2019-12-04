# UVA
#include <bits/stdc++.h>
using namespace std;
int matrix [105][105];
int prefix [105][105];
int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d",&n)){
		memset(matrix,0,sizeof(matrix));
		memset(prefix,0,sizeof(prefix));
		for (int i = 0; i <= n; ++i)
		{
			matrix[i][0]=0;
			matrix[0][i]=0;
		}
		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <=n ; ++j)
			{
				scanf("%d",&matrix[i][j]);
			}
		}
		// for (int i = 0; i <= n; ++i)
		// {
		// 	for (int j = 0; j <=n ; ++j)
		// 	{
		// 		printf("%d ",matrix[i][j]);
		// 	}
		// 	printf("\n");
		// }

		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <=n ; ++j)
			{
				prefix[i][j]=matrix[i][j]+prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1];
			}
		}

		/*for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <=n ; ++j)
			{
				printf("%d ",prefix[i][j]);
			}
			printf("\n");
		}*/
		int submatrix_max=-127*100*100;
		int tmp;
		for (int i = 1; i <=n ; ++i)
		{
			for (int j = 1; j <=n ; ++j)
			{
				for (int k = i; k <=n ; ++k)
				{
					for (int l = j; l <=n ; ++l)
					{
						submatrix_max = max( prefix[k][l]-prefix[k][j-1]-prefix[i-1][l]+prefix[i-1][j-1] , submatrix_max);
					}
				}

			}
		}
		printf("%d\n",submatrix_max );
	}
	return 0;
}
