#define N 5
#define M 5
int process_bingo(int insert_number,int table[N][N])
{
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		if(table[i][j]==insert_number)
		{
		table[i][j]=-1;
		break;
		}
	}
	
	return 0;

}
