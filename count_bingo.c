#define N 5
#define M 5
int count_bingo(int table[N][N])
{
	int i,j;
	int sum=0;
	int count=0;
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
