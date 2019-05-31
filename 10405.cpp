#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string a,b;
	int sa,sb;
	while(getline(cin,a)){
		getline(cin,b);
		a=" "+a;
		b=" "+b;
		sa=a.length();
		sb=b.length();
		int dp[sa][sb];
		for (int i = 0; i < sa; ++i)
		{
			for (int j = 0; j < sb; ++j)
			{
				dp[i][j]=0;
			}
		}
		//cout<<a<<endl<<b<<endl;
		for (int i = 1; i < sa; ++i)
		{
			for (int j = 1; j < sb; ++j)
			{
				int now=0;
				
				if (a[i]==b[j])
				{
					dp[i][j]=max(dp[i-1][j],max(dp[i][j-1],dp[i-1][j-1]+1));
				}
				else{
					dp[i][j]=max(dp[i-1][j],max(dp[i][j-1],dp[i-1][j-1]));
				}
				//printf("i==%d ,j==%d  dp=%d\n",i,j,dp[i][j] );
			}
		}
		printf("%d\n",dp[sa-1][sb-1] );

	}
	return 0;
}
