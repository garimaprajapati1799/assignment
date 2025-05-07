 #include<stdio.h>
 int main()
 {
 	int a[100],size,i,j,temp;
 	printf("\nEnter the size of an array: ");
 	scanf("%d",&size);
 	for(i=0;i<size;i++)
 	{
 	printf("\nEnter the elements in a[%d] : ",i);
 	scanf("%d",&a[i]);
 	}
 	printf("\nThe array a is : ");
 	for(i=0;i<size;i++)
 	{
 		printf("%d ",a[i]);
    }
    int min=a[0];
    int max=a[0];
 	for(i=0;i<size;i++)
 	{
 		if(max<a[i])
 		{
 			max=a[i];
	    }
    }
	for(i=0;i<size;i++)
 	{
 		if(min>a[i])
 		{
 			min=a[i];
	    }
    }
 	printf("\nMaximum value is : %d",max);
 	printf("\nMaximum value is : %d",min);
 	for(i=0;i<size;i++)
 	{
 		for(j=i+1;j<size;j++)
 		{
 			if(a[i]>a[j])
 			{
 			 int temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;	
			}
		 }
	 }
	 printf("\nAn array after sorting is : ");
	 for(i=0;i<size;i++)
	 {
	 	printf("%d ",a[i]);
	 }
 	return 0;
 }
