#include <stdio.h>
#include <stdlib.h>
int N;

#define ROWS N
#define COLS N
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int initiate_bingo(int);
int print_bingo(int);

int main(int argc, char *argv[])
{
	
	
	int N,M;
	int user[ROWS][COLS];
	int com[ROWS][COLS];
	
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
	
	initiabe_bingo(user[ROWS][COLS]);
	print_bingo(user[ROWS][COLS]);
	printf("\n--------------------------------------------------");
	initiabe_bingo(com[ROWS][COLS]);
	print_bingo(com[ROWS][COLS]);
	
	return 0;
	
}

int initiate_bingo(int table[ROWS][COLS])
{
	int i,j;
	int max=N*N;
	
	srand((unsigned)time(NULL));
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
			table[i][j]=1+rand()%max;
	}
	
	return table[N][N];
		
	
}
int print_bingo(int table[ROWS][COLS])
	{
		int i,j;
		
		for(i=0;i<N;i++)
		{
			printf("%d ",table[i][j]);
		}
		
		printf("\n");
		
	return;
	
	}
	
	
