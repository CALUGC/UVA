#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	char in[10]={0};
	int ten=0,hex=0;
	while(~scanf("%s",in)){
		if(in[0]=='-') break;
		//printf("%c\n",in[0] );
		//printf("%cin1\n",in[1] );
		//printf("%dlen\n",strlen(in) );
		if(in[1]=='x'){
			hex=0;
			for (int i = 0; i < strlen(in)-2; ++i)
			{
				if(in[strlen(in)-1-i]<60){ //ASCII碼大寫字母從65開始，數字57結束
					hex+=(in[strlen(in)-1-i]-48)*pow(16,i);
					//printf("%dnormal\n",hex );
				}
				else{
					hex+=(in[strlen(in)-1-i]-55)*pow(16,i);
					//printf("%dhex\n%dic\n%c\nc",hex,i,in[strlen(in)-1-i] );
				}

			}
			printf("%d\n",hex );
		}
		else{
			ten=0;
			for (int i = 0; i < strlen(in); ++i){

				ten+=(in[strlen(in)-1-i]-48)*pow(10,i);
			}
			printf("0x%X\n",ten);
		}

	//printf("%d\n",ten );
	
	}
	return 0;
}