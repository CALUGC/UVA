#include <stdio.h>

int main(int argc, char const *argv[])
{
	while(1){
		int in;
		scanf("%d",&in);
		if(in==0) break;

		else{
			if(in>=101)
				printf("f91(%d) = %d\n",in,in-10 );
		
			else
				printf("f91(%d) = 91\n",in);
		}
	}
	return 0;
}