#define N 5
#define M 5
int get_number_byCom(int table[N][N])
{
	int i,j;
	int same=0; //���� ���ڸ� �̾Ҵ����� �˾ƺ��� ���� ���� 
	int max=N*N;
	do
	{
		same=0; //do�� �ٽ� ��ĥ �� same�� �ʱ�ȭ
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
	
	printf("\n ��ǻ�Ͱ� ���Ƿ� ������ ���ڴ� %i �Դϴ�",com_choice_number);
	
	return com_choice_number;
}

