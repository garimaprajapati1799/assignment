#include<stdio.h>
int main()
{
	int num,flag,check=1,i,j;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		flag=1;
		int num=i;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
	if(flag==1)
	{
		printf("\n%d is a prime number",i);
		check=0;
	}	
	
	}
if(check==1)
{
	printf("\nThere is no prime number");
}
	return 0;
}
