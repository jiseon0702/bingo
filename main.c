#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5
 //���������� �д� 
int user[N][N];
int com[N][N];
int my_choice_number=0; //���� ������ ���� 
int com_choice_number=0;//��ǻ�Ͱ� ������ ���� 
int my_win_number=0; //  ���� ���� �޼��� ���� 
int com_win_number=0; // ��ǻ�Ͱ� ���� �޼��� ����
int turn=0; 
void initiate_bingo();// ��ǻ�Ͱ� ���� ������ ���� 
void print_bingo();
int get_number_byMe();
int process_bingo();
int count_bingo();
 
int main(int argc, char *argv[])
{
	
	int i,j;

	srand((unsigned)time(NULL));
			
	
	
	printf("����� %i �� ����  %i ���� �ϼ��ؾ� �̱�ϴ�! \n ������ �����մϴ�!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");

	initiate_bingo(user);
	print_bingo(user);

	initiate_bingo(com);
	do
	{
	turn++;
	get_number_byMe(user);
	process_bingo(my_choice_number,user);
	process_bingo(my_choice_number,com);
	print_bingo(user);
	
	my_win_number=count_bingo(user);
	com_win_number=count_bingo(com);
	{
		if(my_win_number>=M||com_win_number>=M)
		break;
	}
	get_number_byCom(user);
	process_bingo(com_choice_number,user);
	process_bingo(com_choice_number,com);
	print_bingo(user);
	
	my_win_number=count_bingo(user);
	com_win_number=count_bingo(com);

	printf("\n %i",my_win_number);
	printf("\n %i",com_win_number);
	}
	while(my_win_number<M&&com_win_number<M);
	
	if(my_win_number>com_win_number)
	printf("\n ����� �̰���ϴ�!!!!!! %i��°���� �ºΰ� �����ϴ�",turn);
	
	else if(my_win_number<com_win_number)
	printf("\n ��ǻ�Ͱ� �̰���ϴ� �ФФФФ� %i ��°���� �ºΰ� �����ϴ�.",turn);
	
	else //my_win_number==com_win_number�� ����Դϴ�. 
	printf("����� ��ǻ�Ͷ� ���׿�! %i��°���� �ºΰ� �����ϴ�.",turn);
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
					
					if(bingo[turn-1]==0)//Ȥ�� bingo �迭 25����(bingo[0]~bingo[24]) �� ���ڰ� �������� ���ٸ� 
					{
						table[i][j]=turn;// �� ���ڸ� table�� �����Ѵ� 
						bingo[turn-1]=1;//�׸��� �� ���ڸ� �ٽ� �������� ���ϵ��� 1�� ���� �����Ѵ�.�׸��� break�� while ���� �������´�. 
						break; //���� rand�� �ߺ��� ���ڰ� �����ٸ� if���� ��ġ�� �ʰ�  �ٽ� while���� ���� �������� ���ڰ� ������.
							 
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
	int same=0;
	
	
	
	
	do
	{	same=0;//�ٽ� �����Ͽ��� �� same�� �ʱ�ȭ 
	
		printf("\n 1~25������ ���ڸ� �������ּ��� ! : ");
		scanf("%i",&my_choice_number);
		
		if(my_choice_number>25||my_choice_number<1)
		same=0; //������� ���� ������ 1���� �۰� 25���� ���� �� same = 0 ���� �ٲ��ش�. 

		else
		{
			for(i=0;i<N;i++)
				{for(j=0;j<N;j++)
					
					if(table[i][j]==my_choice_number)
					{
					same=1;
					break;
					} // ���� ����ڰ� ������ ���ڰ� ���� user�ǿ� �ִ� ���ڶ�� same=1�� ������ְ� for���� ����Ѵ�. 
				}
				
		}
		
		if(same==0)//���� same�� 0�̶�� ������� â�� ����. 
		printf("\n ���� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

						
	}
	while(same==0);//same=0�� ���� ��� ���� �����ش�. ��, ���� ���ڰ� ���� �� same�� 1�̹Ƿ� ���������� �ȴ�. 
	
	printf("\n ����� ������ ���ڴ� %i �Դϴ�",my_choice_number);
	
	
	return my_choice_number;
	
}
int get_number_byCom(int table[N][N])
{
	int i,j;
	int same=0; //���� ���ڸ� �̾Ҵ����� �˾ƺ��� ���� ���� 
	int max=N*N;
	do
	{
		same=0; //do�� �ٽ� ��ĥ �� same�� �ʱ�ȭ
		com_choice_number=rand()%max+1;
		
		{
		for(i=0;i<N;i++)
			{
			for(j=0;j<N;j++)
				if(table[i][j]==com_choice_number)
					{
					same=1;
					break;
					}
		 	}
		}
	}while(same==0);
	
	printf("\n ��ǻ�Ͱ� ���Ƿ� ������ ���ڴ� %i �Դϴ�",com_choice_number);
	
	return com_choice_number;
}

int process_bingo(int insert_number,int table[N][N])
{
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		if(table[i][j]==insert_number)
		{
		table[i][j]=-1;
		break;
		}
	}
	
	return 0;

}
int count_bingo(int table[N][N])
{
	int i,j;
	int sum=0;
	int count=0;
	//������ ���� �� 
	for(i=0;i<N;i++)
	{
	
		sum=0;
		{
			for(j=0;j<N;j++)
			{
			sum+=table[i][j];
			
			
	
			if(sum==(-N))
			count++;
			}
		}
	}
	//������ ���� ��	
	for(j=0;j<N;j++)
	{
		sum=0;
			
				for(i=0;i<N;i++)
			{	sum+=table[i][j];
			
			
				if(sum==(-N))
				count++;
			
			}
	}
	
	//y=x�������� ���� ��
	{
		sum=0;
		for(i=0;i<N;i++)
			{
			sum+=table[i][i];
			
			if(sum==(-N))
			count++;
	 		}
	}
	
	//y=-x�������� ���� ��
	{
		sum=0;
		for(i=0;i<N;i++)
		{
			sum+=table[i][N-i-1];
		
		if(sum==(-N))
		count++;
		}
		
	 } 
return count;
}
		
	
	 
	
	

