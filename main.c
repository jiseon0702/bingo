#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5


void initiate_bingo();
void print_bingo();

int main(int argc, char *argv[])
{
	

	int M=0;
	int user[N][N];
	int com[N][N];
	
	srand((unsigned)time(NULL));
			
	do
	{
		printf("\n�� ���� �ϼ��ؾ� �̱�� ������ �� �� �Դϱ�? %i ���Ϸ� �������ּ��� : ",N+N+2); //���� �¸������� M �Է� 
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	

	
	printf("����� %i �� ���� ���Ͽ���, %i ���� �ϼ��ؾ� �̱�ϴ�! \n ������ �����մϴ�!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");

	initiate_bingo(user);
	print_bingo(user);
	
	initiate_bingo(com);
	get_number_byMe(user,com);
	return 0;
	
}
void initiate_bingo(int table[N][N])
	{
		
		//�����Բ��� �˷��ֽ� �ι�° ���
		 
		int i,j;
		int bingo[N*N];
		int turn;
		
		

		for (i=0;i<N;i++){
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
		
			while(1)
			{
				turn=rand()%(N*N)+1;//1~25������ �̾ƺ��� 
					
					if(bingo[turn-1]==0)//Ȥ�� bingo �迭 25���� �� ���ڰ� �������� ���ٸ� 
					{
						table[i][j]=turn;// �� ���ڸ� table�� �����Ѵ� 
						bingo[turn-1]=1;//�׸��� �� ���ڸ� �ٽ� �������� ���ϵ��� 1�� ���� �����Ѵ� 
						break;//���� rand�� �ߺ��� ���ڰ� �����ٸ� if���� ��ġ�� �ʰ�  �ٽ� while���� ���� �������� ���ڰ� ������ 
					}
					
			}
		}
	}
void print_bingo(int table[N][N])
	{
		int i,j;
		
		printf("\n---------<���� ���� ������!!>------------\n");
		for(j=0;j<N;j++){
		
			for(i=0;i<N;i++)
			{
			printf("%d ",table[i][j]); // ���̺� �Է°� �����ֱ� 
			}
	
		printf("\n");		
		}
	
	}
get_number_byMe(int table1[N][N],int table2[N][N]) 
{
	int i,j;
	int my_number; //���� ������ ���� 
	int table1_number;
	int table2_number;
	int same=500; //�ߺ� ���� ��� 
	
	do
	{
	
		printf("1~25������ ���ڸ� �������ּ��� ! : ");
		scanf("%i",my_number);
		
	
							
	}
	while((1<=my_number&&my_number<=25)||same!=0);
}
