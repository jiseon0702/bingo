#define N 5
#define M 5
int count_bingo(int table[N][N])
{
	int i,j;
	int sum=0; // 가로, 세로, 대각선을 다  각각 더했을시 -N을 만족하는지 확인하는 변수 
	int count=0; // 빙고 몇줄 달성 했는지 
	//가로줄 세는 법 
	for(i=0;i<N;i++)
	{
	
		sum=0;
		{
			for(j=0;j<N;j++)
			{
			sum+=table[i][j];
			
			
	
			if(sum==(-N))
			count++;
			}
		}
	}
	//세로줄 세는 법	
	for(j=0;j<N;j++)
	{
		sum=0;
			
			for(i=0;i<N;i++)
			{	sum+=table[i][j];
			
			
				if(sum==(-N))
				count++;
			
			}
	}
	
	//y=x방향으로 세는 법
	{
		sum=0;
		
			for(i=0;i<N;i++)
			{
				sum+=table[i][i];
			
				if(sum==(-N))
				count++;
	 		}
	}
	
	//y=-x방향으로 세는 법
	{
		sum=0;
		
		for(i=0;i<N;i++)
		{
			sum+=table[i][N-i-1];
			
			if(sum==(-N))
			count++;
		}
		
	 } 
return count;
}
