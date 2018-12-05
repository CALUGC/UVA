#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n,k,a=0; //a拿來控制第一次別輸出空行 第二次後結果間要有空行 n為人數 k為場數
	while(1){

		scanf("%d",&n);		
		if(n==0) break;
		if(!a)
			a=1;
		else
			printf("\n");

		scanf("%d",&k);
		int column=k*n*(n-1)/2; //總共比幾場
		int player_win[n]={0},player_lose[n]={0};

		for (int i = 0; i < column; ++i)
		{
			
			
			int sort[2];
			char case1[2][10];

			scanf("%d",&sort[0]);
			scanf("%s",case1[0]);

			scanf("%d",&sort[1]);
			scanf("%s",case1[1]);

				
			//printf("%s=str1\n%s=str2\n",case1[0],case1[1] );
			if(!strcmp(case1[0],"rock")&&!strcmp(case1[1],"scissors")){
				player_win[sort[0]-1]++;
				player_lose[sort[1]-1]++;
			}
			else if(!strcmp(case1[0],"scissors")&&!strcmp(case1[1],"paper")){
				player_win[sort[0]-1]++;
				player_lose[sort[1]-1]++;
			}
			else if(!strcmp(case1[0],"paper")&&!strcmp(case1[1],"rock")){
				player_win[sort[0]-1]++;
				player_lose[sort[1]-1]++;
			}

			else if(!strcmp(case1[0],"scissors")&&!strcmp(case1[1],"rock")){
				player_lose[sort[0]-1]++;
				player_win[sort[1]-1]++;
			}
			else if(!strcmp(case1[0],"paper")&&!strcmp(case1[1],"scissors")){
				player_lose[sort[0]-1]++;
				player_win[sort[1]-1]++;
			}
			else if(!strcmp(case1[0],"rock")&&!strcmp(case1[1],"paper")){
				player_lose[sort[0]-1]++;
				player_win[sort[1]-1]++;
			}
			

			
		}

		for (int i = 0; i < n; ++i)
		{
			if(!player_win[i]&&!player_lose[i])
				printf("-\n");
			else
				printf("%.3f\n",(float)player_win[i]/(player_win[i]+player_lose[i]) );

		}
		

// 1 rock 2 scissors 3 paper
	}
	return 0;
}