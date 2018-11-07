#include <stdio.h>
#include <stdlib.h>

int a;
int b[][];

int initiate_bingo(int a)
{
	int table[a][a];
	int i,j;
	int max=a*a;
	
	srand((unsigned)time(NULL));
	for (i=0;i<a;i++)
		for(j=0;j<a;j++)
			table[i][j]=1+rand()%max;
	
	
	
	return table[a][a];
	
}

int print_bingo(int b[a][a])
{
	int i,j;
	
	for (i=0;i<a;i++){
		for(j=0;j<a;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}


return;	
}
