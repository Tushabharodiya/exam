#include<stdio.h>
main()
{
	int n,unit,e_bill,s_bill,t_bill;
	
	printf("Enter Value Of Uint = ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		e_bill=unit*0.50;
	}
	else if(unit<=150)
	{
		e_bill=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		e_bill=(unit-150)*1.20+100;
	}
	else
	{
		e_bill=(unit-250)*1.50+220;
	}
	printf("Electricity Bill = %d",e_bill);
	s_bill=e_bill*20/100;
	printf("\nsurcharge in Bill = %d",s_bill);
	t_bill=e_bill+s_bill;
	
	printf("\nTotle Electricity Bill = %d",t_bill);
	
}
