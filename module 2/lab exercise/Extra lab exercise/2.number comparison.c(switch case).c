#include<stdio.h>
int main()
{
	int choice,n1,n2,n3;
	up:
	printf("\n1.largest number");
	printf("\n2.smallest number");
	printf("\nEnter the choice: ");
	scanf("%d",&choice);
	printf("\nEnter the number1: ");
	scanf("%d",&n1);
	printf("\nEnter the number2: ");
	scanf("%d",&n2);	
	printf("\nEnter the number3: ");
	scanf("%d",&n3);
	switch(choice)
	{
		case 1:
			if(n1>n2 && n1>n3)
			{
				printf("\n%d is the biggest number",n1);
			}
			else if(n2>n1 && n2>n3)
			{
				printf("\n%d is the biggest number",n2);
			}
			else 
			{
				printf("\n%d is the biggest number",n3);
			}
			break;
		case 2:
			if(n1<n2 && n1<n2)
			{
				printf("\n%d is the smallest number",n1);
			}
			else if(n2<n1 && n2<n3)
			{
				printf("\n%d is the smallest number",n2);
			}
			else
			{
			printf("\n%d is the smallest the number",n3);
			}
			break;
			default:
				{
					printf("\nInvalid choice");
				}
			break; 
	}
	char temp;
	printf("\nEnter Y to continue or N to exit: ");
	scanf("%d",temp);
	if(temp=='Y' && temp=='y')
	{ 
		goto up;
	}
	
	return 0;
}
