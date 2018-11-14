#include <stdio.h>
#include <stdlib.h>
#include "show_table.h"
#define N 5


void initiate_bingo();
void print_bingo();

int main(int argc, char *argv[])
{
	
	
	int M=0;
	int user[N][N];
	int com[N][N];
	
	do
	{
		printf("\n몇 줄을 완성해야 이기는 게임을 할 것 입니까? %i 이하로 선택해주세요 : ",N+N+2); //빙고 승리조건인 M 입력 
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	

	
	printf("당신은 %i 줄 빙고를 택하였고, %i 줄을 완성해야 이깁니다! \n 게임을 시작합니다!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");
	
	initiate_bingo(N,user);
	print_bingo(N,user);

	initiate_bingo(N,com);
	print_bingo(N,com);
	
	return 0;
	
}

void initiate_bingo(int n,int table[N][N])
{
	int i,j,bingo_number=0,while_number=0;
	int max=n*n;
	
	srand((unsigned)time(NULL));	
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			{bingo_number=1+rand()%max; // 난수 발생하여 임의적으로 빙고판 숫자 배치 
			
			do
			{
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						if(table[i][j]==bingo_number)
						{
						j--;
						while_number++;
						}
						else
						table[i][j]=bingo_number;
						
			}
			while(while_number!=0);
			}
			
			
		
	}
	
	
}
void print_bingo(int n,int table[N][N])
	{
		int i,j;
		
		printf("\n---------<나의 현재 빙고판!!>------------\n");
		for(j=0;j<n;j++){
		
			for(i=0;i<n;i++)
			{
			printf("%d ",table[i][j]); // 테이블 입력값 보여주기 
			}
	
		printf("\n");		
		}
	
	}

	
	
