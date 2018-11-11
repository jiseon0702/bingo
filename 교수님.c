#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initiate_bingo(int);
void print_bingo(int);

int main(int argc, char *argv[])
{
	
	
	int N,M;
	int user[N][N];
	int com[N][N];
	
	printf("몇 줄 빙고를 할 것 입니까? : ");
	scanf("%i",&N);
	do
	{
		printf("\n몇 줄을 완성해야 이기는 게임을 할 것 입니까? %i 이하로 선택해주세요 : ",N+N+2);
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	
	printf("당신은 %i 줄 빙고를 택하였고, %i 줄을 완성해야 이깁니다! \n 게임을 시작합니다!",N,M);
	printf("\n--------------------------------------------------------------------------------------");
	
	initiabe_bingo(N,user);
	print_bingo(N,user);

	initiabe_bingo(N,com);
	print_bingo(N,com);
	
	return 0;
	
}

void initiate_bingo(int n,int table[n][n])
{
	int i,j;
	int max=n*n;
	
	srand((unsigned)time(NULL));
	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			table[i][j]=1+rand()%max;
	}
	
		
	
}
void print_bingo(int n,int table[n][n])
	{
		int i,j;
		
		for(j=0;j<n,j++){
		
			for(i=0;i<n;i++)
			{
			printf("%d ",table[i][j]);
			}
	}
		printf("\n");
		
	return;
	
	}
	
	
