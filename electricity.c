#include<stdio.h>
int main()
{
	float bill,units;
	printf("enter the units consumed");
	scanf("%f",&units);
	
	if(units>0 && units<=100)
	{
		bill=units*2;
	}
	else if(units>101 && units<=400)
	{
		bill=(100*2)+(units-100)*4;
	}
	else if( units>400)
	{
		bill=(100*2)+(300*4)+(units-400)*6;
	}
	else
	{
		printf("invalid input");
	}
	printf("electricity bill= rs. %2f\n", bill);


}