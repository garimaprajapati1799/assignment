 #include<stdio.h>
 int main()
 {
 	int a[100][100],b[100][100],ans[100][100],i,j,k,row,col;
 	printf("\nEnter the row count : ");
 	scanf("%d",&row);
 	printf("\nEnter the col count : ");
 	scanf("%d",&col);
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("\na[%d][%d] : ",i,j);
 	    	scanf("%d", &a[i][j]);
		 }
	 }
	 printf("\nAn array a is : \n");
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("%d ",a[i][j]);
		 }
		 printf("\n");
	 }
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("\nb[%d][%d] : ",i,j);
 	    	scanf("%d", &b[i][j]);
		 }
	 }
	 printf("\nAn array b is : \n");
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("%d ",b[i][j]);
		 }
		 printf("\n");
	 }
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	     ans[i][j]=a[i][j]+b[i][j];
		 }
	 }
	 printf("\nThe addition of both arrays is : \n");
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("%d ",ans[i][j]);
		 }
		 printf("\n");
	 }
	int c[100][100],d[100][100],multi[100][100];
	printf("\nEnter the row count : ");
 	scanf("%d",&row);
 	printf("\nEnter the col count : ");
 	scanf("%d",&col);
  for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("\nc[%d][%d] : ",i,j);
 	    	scanf("%d", &c[i][j]);
		 }
	 }
	 printf("\nAn array c is : \n");
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("%d ",c[i][j]);
		 }
		 printf("\n");
	 }	
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("\na[%d][%d] : ",i,j);
 	    	scanf("%d", &d[i][j]);
		 }
	 }
	 printf("\nAn array d is : \n");
 for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("%d ",d[i][j]);
		 }
		 printf("\n");
	 }
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		multi[i][j]=0;
		for(k=0;k<col;k++)
		{
			multi[i][j]=multi[i][j]+(c[i][k]*d[k][j]);
		}
	}
}
printf("\nMultiplication of both arrays is : \n");
for(i=0;i<row;i++)
	 {
 	    for(j=0;j<col;j++)
 	    {
 	    	printf("%d ",multi[i][j]);
		 }
		 printf("\n");
	}


 return 0;
 }
