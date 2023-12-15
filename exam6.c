#include<stdio.h>
main()
{
	char i,j,c='A';
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
	
	
}