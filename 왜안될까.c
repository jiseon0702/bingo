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
	
	printf("�� �� ���� �� �� �Դϱ�? : ");
	scanf("%i",&N);
	do
	{
		printf("\n�� ���� �ϼ��ؾ� �̱�� ������ �� �� �Դϱ�? %i ���Ϸ� �������ּ��� : ",N+N+2);
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	
	printf("����� %i �� ���� ���Ͽ���, %i ���� �ϼ��ؾ� �̱�ϴ�! \n ������ �����մϴ�!",N,M);
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
	
	
