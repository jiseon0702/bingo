#define N 5
#define M 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int com_choice_number;

int get_number_byCom(int table[N][N])
{
	int i,j;
	int same=0; //���� ���ڸ� �̾Ҵ����� �˾ƺ��� ���� ���� 
	int max=N*N;
	do
	{
		same=0; //do�� �ٽ� ��ĥ �� same�� �ʱ�ȭ
		com_choice_number=rand()%max+1; //�ƹ� ���ڳ� �̾ƺ��ϴ�. 
		
		{
		for(i=0;i<N;i++)
			{
			for(j=0;j<N;j++)
				if(table[i][j]==com_choice_number) // ���� �׼��ڰ� table�� �ִٸ� same =1 �� �����Ͽ� for���� ���ɴϴ�. 
					{
						same=1;
						break;
					}
		 	}
		}
	}while(same==0); // same�� ++ �����ʰ� ��� 0�Ͻ� �ٽ� �ݺ��Ѵ�. (same=0�Ͻ� table�� ���� ���� > �ߺ��� ����) 
	
	printf("\n ��ǻ�Ͱ� ���Ƿ� ������ ���ڴ� %i �Դϴ�",com_choice_number);
	
	return com_choice_number;
}

