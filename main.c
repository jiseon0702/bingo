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
		printf("\n몇 줄을 완성해야 이기는 게임을 할 것 입니까? %i 이하로 선택해주세요 : ",N+N+2); //빙고 승리조건인 M 입력 
		scanf("%i",&M);		
	}
	while(M>N+N+2);
	

	
	printf("당신은 %i 줄 빙고를 택하였고, %i 줄을 완성해야 이깁니다! \n 게임을 시작합니다!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");

	initiate_bingo(user);
	print_bingo(user);
	
	initiate_bingo(com);
	get_number_byMe(user,com);
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
get_number_byMe(int table1[N][N],int table2[N][N]) 
{
	int i,j;
	int my_number; //내가 선택한 숫자 
	int table1_number;
	int table2_number;
	int same=500; //중복 됐을 경우 
	
	do
	{
	
		printf("1~25까지의 숫자를 선택해주세요 ! : ");
		scanf("%i",my_number);
		
	
							
	}
	while((1<=my_number&&my_number<=25)||same!=0);
}
