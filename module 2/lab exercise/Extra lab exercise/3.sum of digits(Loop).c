#include<stdio.h>
int main()
{
	int num,digit=0,rem,sum=0;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	int temp=num;
	int copy=num;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem;
		temp=temp/10;
	}
	
	printf("\nsum of total digit is : %d",sum);
	
	return 0;
	
}
