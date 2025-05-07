#include<stdio.h>
int factorial(n);
int factorial(n)
{
	int i;
    int fact=1;

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
    int result=	factorial(num);
	printf("\nThe factorial is : %d ",result);
	return 0;
}
