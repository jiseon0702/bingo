
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
			{bingo_number=1+rand()%max; // ���� �߻��Ͽ� ���������� ������ ���� ��ġ 
			
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
		
		printf("\n---------<���� ���� ������!!>------------\n");
		for(j=0;j<n;j++){
		
			for(i=0;i<n;i++)
			{
			printf("%d ",table[i][j]); // ���̺� �Է°� �����ֱ� 
			}
	
		printf("\n");		
		}
	
	}

