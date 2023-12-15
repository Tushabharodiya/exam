#include<stdio.h>
main()
{
	int i,n,n1,n2=n+n1,temp;
	
	printf("Ente Of Size = ");
	scanf("%d",&n);
	
	int a[100],b[100],c[200];
	printf("Enter Value Of First Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	printf("Enter Value Of Second Element = \n");
	temp=i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
		c[temp]=b[i];
		temp++;
	
	}
	for(i=0;i<n2;i++)
	{
	  	printf("%d",c[i]);
	  
	}
}