#include<stdio.h>
main()
{
	int i,n,fd,ld,sum;
	
	printf("Enter Value Of Number = ");
	scanf("%d",&n);
	
	ld=n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	printf("Sum Of First And Last Digit = %d",sum);
}