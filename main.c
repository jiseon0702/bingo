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
int turn=0; 
 
int main(int argc, char *argv[])
{
	
	int i,j;

	srand((unsigned)time(NULL));
			
	
	
	printf("당신은 %i 줄 빙고를  %i 줄을 완성해야 이깁니다! \n 게임을 시작합니다!",N,M);
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
	printf("\n 당신이 이겼습니다!!!!!! %i번째에서 승부가 났습니다",turn);
	
	else if(my_win_number<com_win_number)
	printf("\n 컴퓨터가 이겼습니다 ㅠㅠㅠㅠㅠ %i 번째에서 승부가 났습니다.",turn);
	
	else //my_win_number==com_win_number인 경우입니다. 
	printf("당신은 컴퓨터랑 비겼네요! %i번째에서 승부가 났습니다.",turn);
	
	return 0;
	
}

	 
	
	

