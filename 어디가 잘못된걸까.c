#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int bingo_check[N*N]; //���������� �д� 
int user[N][N];
int com[N][N];

void initiate_bingo();
void print_bingo();
int get_number_byMe();


int main(int argc, char *argv[])
{
	
	int i,j,get_number_byMe,get_number_byCom; 
	int M=0;
	{
	for(i=0;i<(N*N);i++)
		bingo_check[i]=i; // ���ڸ� ������ �� �̹� ������ �Ǿ��ִ°��� Ȯ�� �ϱ� ���� ���� 1~25�� ����� ���� �д�. 
	}
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
	get_number_byMe(user);

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
int get_number_byMe(int table[N][N]) 
{
	int i,j;
	int my_number=0; //���� ������ ���� 
	int same=0; // 
	
	
	
	
	do
	{
		printf("\n 1~25������ ���ڸ� �������ּ��� ! : ");
		scanf("%i",&my_number);
		
		if(my_number>25||my_number<1)
		same=0;

		else
		{
			for(i=0;i<N;i++)
				for(j=0;j<N;j++)
				{
					if(table[i][j]==my_number)
					same=1;
					break;
				}
				
		}
		
		if(same==0)
		printf("\n ���� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

						
	}
	while(same==0);
	
	printf("\n ����� ������ ���ڴ� %i �Դϴ�",my_number);
	
	
	return my_number;
	
}
