#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("\nEnter the number 1 : ");
	scanf("%d",&n1);
	printf("\nEnter the number 2 : ");
	scanf("%d",&n2);
	printf("\nEnter the number 3 : ");
	scanf("%d",&n3);
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
    if(n1<n2 && n1<n3)
    {
    	printf("\n%d is the smallest number",n1);
	}
	else if(n2<n1 && n2<n3)
	{
		printf("\n%d is the smallest number",n2);
	}
	else
	{
		printf("\n%d is the smallest number",n3);
	}
	return 0;
}
