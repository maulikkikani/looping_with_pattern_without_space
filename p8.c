#include<stdio.h>

int main()
{
	int n=5;
	int i,j
	for(i=0;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
			printf("%c ",j+65);
		}
		printf("\n");
	}
	
}
