#include<stdio.h>
int main()
{
	int a[5],i;	
	printf("\nThe array is :");
	for(i=0;i<5;i++)
	{
		printf("\nEnter the elements in a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nThe array a is : ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	int b[3][3],j;
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter the elements in b[%d][%d] :    ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe array of b is :\n");
		for(i=0;i<3;i++)
    	{
	    	for(j=0;j<3;j++)
			{
				printf("%d ",b[i][j]);
			
			}
			printf("\n");
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				sum=sum+b[i][j];
			}
		}
		printf("\nThe sum of all the elements of b is :   %d ",sum);
	
	
	return 0;
}

