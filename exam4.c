#include<stdio.h>
main()
{
	int a,b,c,d;
	
	printf("Enter Value Of A = ");
	scanf("%d",&a);
	printf("Enter Value Of B = ");
	scanf("%d",&b);
	printf("Enter Value Of C = ");
	scanf("%d",&c);
	printf("Enter Value Of D = ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("%d Is Maximum ",a);
			}else
			{
				printf("%d Is Maximum ",d);
			}	
		}else
		{
			if(c>d)
			{
				printf("%d Is Maximum ",c);
			}else
			{
				printf("%d Is Maximum ",d);
			}
		}	
	}else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("%d Is Maximum ",b);
			}else
			{
				printf("%d Is Maximum ",d);
			}	
		}else
		{
			if(c>d)
			{
				printf("%d Is Maximum ",c);
			}else
			{
				printf("%d Is Maximum ",d);
			}
		}
	}
}