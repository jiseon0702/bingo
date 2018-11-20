#define N 5
#define M 5
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
				if(table[i][j]==com_choice_number)
					{
					same=1;
					break;
					}
		 	}
		}
	}while(same==0);
	
	printf("\n 컴퓨터가 임의로 선택한 숫자는 %i 입니다",com_choice_number);
	
	return com_choice_number;
}

