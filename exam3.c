#include<stdio.h>
main()
{
	int r,c,i,j,sum=0;
	
	printf("Enter Value  Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Value Of Coulmn Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter Value Of First Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Element of Matrix = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum Of Diagonal Element = %d",sum);
}