#include<stdio.h>

main()
{
	int n=5;
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%2d ",(i+j)%2);
		}
		printf("\n");
	}
}
