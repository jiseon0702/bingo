#define N 5
#define M 5
int get_number_byMe(int table[N][N]) 
{
	int i,j;
	int same=0;
	
	
	
	
	do
	{	same=0;//�ٽ� �����Ͽ��� �� same�� �ʱ�ȭ 
	
		printf("\n 1~25������ ���ڸ� �������ּ��� ! : ");
		scanf("%i",&my_choice_number);
		
		if(my_choice_number>25||my_choice_number<1)
		same=0; //������� ���� ������ 1���� �۰� 25���� ���� �� same = 0 ���� �ٲ��ش�. > �� ���� �����޼��� ����Ʈ 

		else
		{
			for(i=0;i<N;i++)
				{for(j=0;j<N;j++)
					
					if(table[i][j]==my_choice_number)
					{
					same=1;
					break;
					} // ���� ����ڰ� ������ ���ڰ� ���� user�ǿ� �ִ� ���ڶ�� same=1�� ������ְ� for���� ����Ѵ�. 
				}
				
		}
		
		if(same==0)//���� same�� 0�̶�� ������� â�� ����. 
		printf("\n ���� !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");

						
	}
	while(same==0);//same=0�� ���� ��� ���� �����ش�. ��, ���� ���ڰ� ���� �� same�� 1�̹Ƿ� ���������� �ȴ�. 
					//���� ������ ���ڰ� user ���̺� ���� �� ���� �� �����Ƿ� while���� �������´�. 
	
	printf("\n ����� ������ ���ڴ� %i �Դϴ�",my_choice_number);
	
	
	return my_choice_number;  
	
}
