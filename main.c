#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
 //전역변수로 둔다 
int user[N][N];
int com[N][N];
int my_choice_number=0; //내가 선택한 숫자
int com_choice_number=0;//컴퓨터가 선택한 숫자 
void initiate_bingo();
void print_bingo();
int get_number_byMe();
int process_bingo();

int main(int argc, char *argv[])
{
	
	int i,j;
	int M=0;
	
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
	printf("\n 사용자가 이거 뽑은거 맞죠?  : %i",my_choice_number);
	process_bingo(my_choice_number,user);
	print_bingo(user);
	
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
					
					if(bingo[turn-1]==0)//혹시 bingo 배열 25개중(bingo[0]~bingo[24]) 이 숫자가 뽑힌적이 없다면 
					{
						table[i][j]=turn;// 그 숫자를 table에 대입한다 
						bingo[turn-1]=1;//그리고 그 숫자를 다시 대입하지 못하도록 1의 값을 지정한다.그리고 break로 while 문을 빠져나온다. 
						break; //만약 rand중 중복된 숫자가 뽑힌다면 if문을 거치지 않고  다시 while문을 돌아 랜덤으로 숫자가 뽑힌다.
							 
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
	int same=0;
	
	
	
	
	do
	{	same=0;//다시 실행하였을 때 same의 초기화 
	
		printf("\n 1~25까지의 숫자를 선택해주세요 ! : ");
		scanf("%i",&my_choice_number);
		
		if(my_choice_number>25||my_choice_number<1)
		same=0; //사용자의 숫자 선택이 1보다 작고 25보다 컸을 때 same = 0 으로 바꿔준다. 

		else
		{
			for(i=0;i<N;i++)
				{for(j=0;j<N;j++)
					
					if(table[i][j]==my_choice_number)
					{
					same=1;
					break;
					} // 만약 사용자가 선택한 숫자가 현재 user판에 있는 숫자라면 same=1을 만들어주고 for문을 통과한다. 
				}
				
		}
		
		if(same==0)//만약 same이 0이라면 오류라고 창을 띄운다. 
		printf("\n 오류 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

						
	}
	while(same==0);//same=0일 동안 계속 실행 시켜준다. 즉, 같은 숫자가 있을 시 same이 1이므로 빠져나오게 된다. 
	
	printf("\n 당신이 선택한 숫자는 %i 입니다",my_choice_number);
	
	
	return my_choice_number;
	
}
int get_number_byCom(int table[N][N])
{
	int i,j;
	int same=0; //같은 숫자를 뽑았는지를 알아보기 위한 변수 
	int max=N*N;
	do
	{
		same=0; //do를 다시 거칠 때 same의 초기화
		com_choice_number=rand()%max+1;
		
		{
		for(i=0;i<N;i++)
			{
			for(j=0;j<N;j++)
				if(table[N][N]==com_choice_number)
					{
					same=1;
					break;
					}
		 	}
		}
	}while(same==1);
	
	printf("\n 컴퓨터가 임의로 선택한 숫자는 %i 입니다",com_choice_number);
	
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
	return 0;
	
}
