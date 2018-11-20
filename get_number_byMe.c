#define N 5
#define M 5
int get_number_byMe(int table[N][N]) 
{
	int i,j;
	int same=0;
	
	
	
	
	do
	{	same=0;//다시 실행하였을 때 same의 초기화 
	
		printf("\n 1~25까지의 숫자를 선택해주세요 ! : ");
		scanf("%i",&my_choice_number);
		
		if(my_choice_number>25||my_choice_number<1)
		same=0; //사용자의 숫자 선택이 1보다 작고 25보다 컸을 때 same = 0 으로 바꿔준다. > 그 다음 오류메세지 프린트 

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
					//내가 선택한 숫자가 user 테이블에 있을 시 지울 수 있으므로 while문을 빠져나온다. 
	
	printf("\n 당신이 선택한 숫자는 %i 입니다",my_choice_number);
	
	
	return my_choice_number;  
	
}
