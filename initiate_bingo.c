#define N 5
#define M 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initiate_bingo(int table[N][N])
	{
		
		//�����Բ��� �˷��ֽ� �ι�° ���
		 
		int i,j;
		int bingo[N*N];
		int turn;
		
		

		for (i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
			{
				table[i][j]=0;
				//������ �ʱ�ȭ 
			}
		
		}
		
		for(i=0;i<N*N;i++)
		{
			bingo[i]=0; //������ ���� �ʱ�ȭ 
		}
		
		for(i=0;i<N;i++)
		{
			for(j=0;j<N;j++)
		
			do
			{
				turn=rand()%(N*N)+1;//1~25������ �̾ƺ��� 
					
					if(bingo[turn-1]==0)//Ȥ�� bingo �迭 25����(bingo[0]~bingo[24]) �� ���ڰ� �������� ���ٸ� 
					{
						table[i][j]=turn;// �� ���ڸ� table�� �����Ѵ� 
						bingo[turn-1]=1;//�׸��� �� ���ڸ� �ٽ� �������� ���ϵ��� 1�� ���� �����Ѵ�.�׸��� break�� while ���� �������´�. 
						break; //���� rand�� �ߺ��� ���ڰ� �����ٸ� if���� ��ġ�� �ʰ�  �ٽ� while���� ���� �������� ���ڰ� ������.
							 
					}
			}
			while(1);
					
			
		}
	}
