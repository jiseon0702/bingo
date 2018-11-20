#define N 5
#define M 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_bingo(int table[N][N])
	{
		int i,j;
		
		printf("\n---------<나의 현재 빙고판!!>------------\n");
		for(j=0;j<N;j++)
		{
			for(i=0;i<N;i++)
			{
				printf("%2d ",table[i][j]); // 테이블 입력값 보여주기 
			}
					
		printf("\n");		
		}
			
	}
