#include <stdio.h>
#include <stdlib.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initiate_bingo();
void print_bingo();

int main(int argc, char *argv[])
{
	
	
	int M=0;
	
	
\
	do
	{
		printf("\n�� ���� �ϼ��ؾ� �̱�� ������ �� �� �Դϱ�? %i ���Ϸ� �������ּ��� : ",N+N+2);
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	
	int user[N][N];
	int com[N][N];
	
	printf("����� %i �� ���� ���Ͽ���, %i ���� �ϼ��ؾ� �̱�ϴ�! \n ������ �����մϴ�!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");
	
	initiate_bingo(N,user);
	print_bingo(N,user);

	initiate_bingo(N,com);
	print_bingo(N,com);
	
	return 0;
	
}

void initiate_bingo(int n,int table[N][N])
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
void print_bingo(int n,int table[N][N])
	{
		int i,j;
		
		for(j=0;j<n;j++){
		
			for(i=0;i<n;i++)
			{
			printf("%d ",table[i][j]);
			}
	
		printf("\n");		
		}
	
	}
	
	
