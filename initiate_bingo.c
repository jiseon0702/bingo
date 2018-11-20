#define N 5
#define M 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initiate_bingo(int table[N][N])
	{
		
		//교수님께서 알려주신 두번째 방법
		 
		int i,j;
		int bingo[N*N];
		int turn;
		
		

		for (i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				table[i][j]=0;
				//빙고판 초기화 
			}
		
		}
		
		for(i=0;i<N*N;i++)
		{
			bingo[i]=0; //대입할 숫자 초기화 
		}
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
		
			do
			{
				turn=rand()%(N*N)+1;//1~25숫자중 뽑아본다 
					
					if(bingo[turn-1]==0)//혹시 bingo 배열 25개중(bingo[0]~bingo[24]) 이 숫자가 뽑힌적이 없다면 
					{
						table[i][j]=turn;// 그 숫자를 table에 대입한다 
						bingo[turn-1]=1;//그리고 그 숫자를 다시 대입하지 못하도록 1의 값을 지정한다.그리고 break로 while 문을 빠져나온다. 
						break; //만약 rand중 중복된 숫자가 뽑힌다면 if문을 거치지 않고  다시 while문을 돌아 랜덤으로 숫자가 뽑힌다.
							 
					}
			}
			while(1);
					
			
		}
	}
