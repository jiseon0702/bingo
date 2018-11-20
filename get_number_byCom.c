#define N 5
#define M 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int com_choice_number;

int get_number_byCom(int table[N][N])
{
	int i,j;
	int same=0; //같은 숫자를 뽑았는지를 알아보기 위한 변수 
	int max=N*N;
	do
	{
		same=0; //do를 다시 거칠 때 same의 초기화
		com_choice_number=rand()%max+1; //아무 숫자나 뽑아봅니다. 
		
		{
		for(i=0;i<N;i++)
			{
			for(j=0;j<N;j++)
				if(table[i][j]==com_choice_number) // 만약 그숫자가 table에 있다면 same =1 을 지정하여 for문을 나옵니다. 
					{
						same=1;
						break;
					}
		 	}
		}
	}while(same==0); // same이 ++ 되지않고 계속 0일시 다시 반복한다. (same=0일시 table에 없는 숫자 > 중복된 숫자) 
	
	printf("\n 컴퓨터가 임의로 선택한 숫자는 %i 입니다",com_choice_number);
	
	return com_choice_number;
}

