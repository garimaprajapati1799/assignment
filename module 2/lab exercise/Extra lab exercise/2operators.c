#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the number :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is even",num);
	}
	else
	{
		printf("\n%d is odd number",num);
	}
	if(num>0)
	{
	printf("\n%d Number is positive",num);	
	}
	else if(num==0)
	{
		printf("\n%d is zero",num);
	}
	else
	{
		printf("\n%d is negative",num);
	}
	if(num%3==0 && num%5==0)
	{
		printf("\n%d Number is multiple of both",num);
	}
	else
	{
		printf("\n%d is not the multiple of 3 and 5",num);
	}
	return 0;
}
