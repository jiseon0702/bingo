#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
int bingo_check[N*N]; //전역변수로 둔다 
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
		bingo_check[i]=i; // 숫자를 선택할 때 이미 선택이 되어있는건지 확인 하기 위해 먼저 1~25를 만들어 놓아 둔다. 
	}
	srand((unsigned)time(NULL));
			
	do
	{
		printf("\n몇 줄을 완성해야 이기는 게임을 할 것 입니까? %i 이하로 선택해주세요 : ",N+N+2); //빙고 승리조건인 M 입력 
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	

	
	printf("당신은 %i 줄 빙고를 택하였고, %i 줄을 완성해야 이깁니다! \n 게임을 시작합니다!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");

	initiate_bingo(user);
	print_bingo(user);
	
	initiate_bingo(com);
	get_number_byMe(user);

	return 0;
	
}
void initiate_bingo(int table[N][N])
	{
		
		//교수님께서 알려주신 두번째 방법
		 
		int i,j;
		int bingo[N*N];
		int turn;
		
		

		for (i=0;i<N;i++){
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
		
			while(1)
			{
				turn=rand()%(N*N)+1;//1~25숫자중 뽑아본다 
					
					if(bingo[turn-1]==0)//혹시 bingo 배열 25개중 이 숫자가 뽑힌적이 없다면 
					{
						table[i][j]=turn;// 그 숫자를 table에 대입한다 
						bingo[turn-1]=1;//그리고 그 숫자를 다시 대입하지 못하도록 1의 값을 지정한다 
						break;//만약 rand중 중복된 숫자가 뽑힌다면 if문을 거치지 않고  다시 while문을 돌아 랜덤으로 숫자가 뽑힌다 
					}
					
			}
		}
	}
void print_bingo(int table[N][N])
	{
		int i,j;
		
		printf("\n---------<나의 현재 빙고판!!>------------\n");
		for(j=0;j<N;j++){
		
			for(i=0;i<N;i++)
			{
			printf("%d ",table[i][j]); // 테이블 입력값 보여주기 
			}
	
		printf("\n");		
		}
	
	}
int get_number_byMe(int table[N][N]) 
{
	int i,j;
	int my_number=0; //내가 선택한 숫자 
	int same=0; // 
	
	
	
	
	do
	{
		printf("\n 1~25까지의 숫자를 선택해주세요 ! : ");
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
		printf("\n 오류 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

						
	}
	while(same==0);
	
	printf("\n 당신이 선택한 숫자는 %i 입니다",my_number);
	
	
	return my_number;
	
}
