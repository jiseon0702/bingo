
#include <stdio.h>
#include <stdlib.h>
#define N 5
int same_number(int n, int table[N][N]);
void initiate_bingo(int n,int table[N][N]);
void print_bingo(int n,int table[N][N]);

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
						break;
						}
						else
						table[i][j]=bingo_number;
						
			}
			while(while_number==1);
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

