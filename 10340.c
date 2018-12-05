#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char s[100000],l[100000];
	while(~scanf("%s %s",s,l)){
		//printf("%d",strlen(s) );//檢查長度
		int j=0;
		int check=strlen(s);
		for (int i = 0; i < strlen(l); ++i)
		{
			if(s[j]==l[i]){
				j++;
				check--;

			}
		}
		if(check) printf("No\n");
		else printf("Yes\n");
		
	}
	return 0;
}