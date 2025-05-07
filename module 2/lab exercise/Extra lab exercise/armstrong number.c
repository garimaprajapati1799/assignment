#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number : ");
	scanf("%d",&start);
	printf("\nEnter the ending number : ");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		int digit=0;
		int num=i;
		int temp=i;
		int copy=i;
		int power,sum=0,rem;
		while(num!=0)
		{
			num=num/10;
			digit++;
		}
		while(temp!=0)
		{
			 rem=temp%10;
			 power=pow(rem,digit);
			 sum=sum+power;
			 temp=temp/10;
		}
		if(sum==copy)
		{
			printf("%d ",copy);
		}
		
	}
return 0;	
}
