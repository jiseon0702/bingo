#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 5
#include "initiate_bingo.h"
#include "print_bingo.h"
#include "get_number_byMe.h"
#include "get_number_byCom.h"
#include "process_bingo.h"
#include "count_bingo.h"

 //전역변수로 둔다 
int user[N][N];//나의 빙고판 
int com[N][N];//컴퓨터의 빙고판 
int my_choice_number=0; //내가 선택한 숫자 
int com_choice_number=0;//컴퓨터가 선택한 숫자 
int my_win_number=0; //  내가 빙고 달성한 숫자 
int com_win_number=0; // 컴퓨터가 빙고 달성한 숫자
int turn=0; //turn 시도한 횟수 
 
int main(int argc, char *argv[])
{
	
	int i,j;

	srand((unsigned)time(NULL));
			
	
	
	printf("당신은 %i 줄 빙고를  %i 줄을 완성해야 이깁니다! \n 게임을 시작합니다!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");

	initiate_bingo(user); // 나의 빙고판을 만듭니다. 
	print_bingo(user); // 나의 빙고판을 보여줍니다. 

	initiate_bingo(com); // 컴퓨터의 빙고판을 만듭니다. 
	do // 여기서부터 게임을 진행합니다. 
	{
		turn++; //do가 실행될 때 turn의 값을 하나씩 증가시킵니다. 
		
		
		get_number_byMe(user); //내가 숫자를 선택합니다. 
		process_bingo(my_choice_number,user); // 그 숫자를 -1로 바꿔줍니다. 
		process_bingo(my_choice_number,com);
		print_bingo(user); // 현재 나의 빙고판을 보여줍니다. 
		
		my_win_number=count_bingo(user); // 내가 빙고를 M줄 달성했는지 확인합니다.  
		com_win_number=count_bingo(com); // 컴퓨터가 빙고를 M줄 달성했는지 확인합니다. 
		
		printf("\n 지금까지 내가 만든 빙고 수 ! : %i",my_win_number);
		printf("\n 지금까지 컴퓨터가 만든 빙고 수 ! : %i",com_win_number);
		
		{
			if(my_win_number>=M||com_win_number>=M) // 중간점검! 만약 컴퓨터나 내가 빙고 M줄을 달성했을 시 반복문을 빠져나옵니다. 
			break;
		}
		get_number_byCom(user); // 컴퓨터가 숫자를 선택합니다. 
		process_bingo(com_choice_number,user); //위와 동일합니다. 
		process_bingo(com_choice_number,com);
		print_bingo(user);
		
		my_win_number=count_bingo(user);
		com_win_number=count_bingo(com);
	
		printf("\n 지금까지 내가 만든 빙고 수 ! : %i",my_win_number);
		printf("\n 지금까지 컴퓨터가 만든 빙고 수 ! : %i",com_win_number);
	} while(my_win_number<M&&com_win_number<M); // 컴퓨터와 내가 빙고를 M줄 달성할 때 까지 반복합니다. 
	
	if(my_win_number>com_win_number)
	printf("\n 당신이 이겼습니다!!!!!! %i번째에서 승부가 났습니다",turn);
	
	else if(my_win_number<com_win_number)
	printf("\n 컴퓨터가 이겼습니다 ㅠㅠㅠㅠㅠ %i 번째에서 승부가 났습니다.",turn);
	
	else //my_win_number==com_win_number인 경우입니다. 
	printf("당신은 컴퓨터랑 비겼네요! %i번째에서 승부가 났습니다.",turn);
	
	return 0;
	
}


	 
	
	

