#include <iostream> 
#include <string.h> 
#include <stdio.h>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	char a[1000];
	while(~scanf("%s",a)){
		//printf("%da\n",strlen(a));
		for(int i=0;i<strlen(a);i++){
			a[i]-=7;
		}
		printf("%s\n",a );
	}
	

	return 0;
} 