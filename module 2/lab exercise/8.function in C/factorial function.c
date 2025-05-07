#include<stdio.h>
int factorial(int num);//declaration
int main()
{
	int n,result;
	printf("\nEnter the num : ");
	scanf("%d",&n);
	
    result=factorial(n);//calling
    printf("\nThe factorial of %d is %d",n,result);
	
	return 0;
}
int factorial(int num)//definition
{
	int i,fact=1;
	for(i=1;i<=num;i++)
	{
		fact= fact*i;
	}
	return fact;
}
