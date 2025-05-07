#include<stdio.h>
int main ()
{
	int a[100],size,i,sum=0;
	printf("\nEnter the size of an array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	printf("\nEnter the elements in a[%d] is : ",i);
	scanf("%d",&a[i]);
	}
	printf("\nThe array is : ");
	for(i=0;i<size;i++)
	    	{
		    	printf("%d ",a[i]);
	     	}
	for(i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	printf("\nThe sum of array elements is :%d",sum);
	printf("\nThe average  of array elements is :%d",sum/size);
	
			 		
	return 0;

}
