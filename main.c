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

 //���������� �д� 
int user[N][N];//���� ������ 
int com[N][N];//��ǻ���� ������ 
int my_choice_number=0; //���� ������ ���� 
int com_choice_number=0;//��ǻ�Ͱ� ������ ���� 
int my_win_number=0; //  ���� ���� �޼��� ���� 
int com_win_number=0; // ��ǻ�Ͱ� ���� �޼��� ����
int turn=0; 
 
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

	 
	
	

