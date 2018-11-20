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
int turn=0; //turn �õ��� Ƚ�� 
 
int main(int argc, char *argv[])
{
	
	int i,j;

	srand((unsigned)time(NULL));
			
	
	
	printf("����� %i �� ����  %i ���� �ϼ��ؾ� �̱�ϴ�! \n ������ �����մϴ�!",N,M);
	printf("\n--------------------------------------------------------------------------------------\n");

	initiate_bingo(user); // ���� �������� ����ϴ�. 
	print_bingo(user); // ���� �������� �����ݴϴ�. 

	initiate_bingo(com); // ��ǻ���� �������� ����ϴ�. 
	do // ���⼭���� ������ �����մϴ�. 
	{
		turn++; //do�� ����� �� turn�� ���� �ϳ��� ������ŵ�ϴ�. 
		
		
		get_number_byMe(user); //���� ���ڸ� �����մϴ�. 
		process_bingo(my_choice_number,user); // �� ���ڸ� -1�� �ٲ��ݴϴ�. 
		process_bingo(my_choice_number,com);
		print_bingo(user); // ���� ���� �������� �����ݴϴ�. 
		
		my_win_number=count_bingo(user); // ���� ���� M�� �޼��ߴ��� Ȯ���մϴ�.  
		com_win_number=count_bingo(com); // ��ǻ�Ͱ� ���� M�� �޼��ߴ��� Ȯ���մϴ�. 
		
		printf("\n ���ݱ��� ���� ���� ���� �� ! : %i",my_win_number);
		printf("\n ���ݱ��� ��ǻ�Ͱ� ���� ���� �� ! : %i",com_win_number);
		
		{
			if(my_win_number>=M||com_win_number>=M) // �߰�����! ���� ��ǻ�ͳ� ���� ���� M���� �޼����� �� �ݺ����� �������ɴϴ�. 
			break;
		}
		get_number_byCom(user); // ��ǻ�Ͱ� ���ڸ� �����մϴ�. 
		process_bingo(com_choice_number,user); //���� �����մϴ�. 
		process_bingo(com_choice_number,com);
		print_bingo(user);
		
		my_win_number=count_bingo(user);
		com_win_number=count_bingo(com);
	
		printf("\n ���ݱ��� ���� ���� ���� �� ! : %i",my_win_number);
		printf("\n ���ݱ��� ��ǻ�Ͱ� ���� ���� �� ! : %i",com_win_number);
	} while(my_win_number<M&&com_win_number<M); // ��ǻ�Ϳ� ���� ���� M�� �޼��� �� ���� �ݺ��մϴ�. 
	
	if(my_win_number>com_win_number)
	printf("\n ����� �̰���ϴ�!!!!!! %i��°���� �ºΰ� �����ϴ�",turn);
	
	else if(my_win_number<com_win_number)
	printf("\n ��ǻ�Ͱ� �̰���ϴ� �ФФФФ� %i ��°���� �ºΰ� �����ϴ�.",turn);
	
	else //my_win_number==com_win_number�� ����Դϴ�. 
	printf("����� ��ǻ�Ͷ� ���׿�! %i��°���� �ºΰ� �����ϴ�.",turn);
	
	return 0;
	
}


	 
	
	

