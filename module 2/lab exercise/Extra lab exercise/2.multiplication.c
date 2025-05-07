#include<stdio.h>
int main()
{
	int num,start,end,i,temp;
	printf("\nEnter the number to print the table : ");
	scanf("%d",&num);
	printf("\nEnter the start : ");
	scanf("%d",&start);
	printf("\nEnter the end : ");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		 temp=num*i;
		 printf("\n%d * %d is %d",num,i,temp);
	}
	return 0;
	
}
