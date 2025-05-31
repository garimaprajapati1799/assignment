#include<iostream>
using namespace std;
int main()
{
	int i,j,row,col,a[100][100],b[100][100],c[100][100];
	cout<<"\nEnter the row count : ";
	cin>>row; 
	cout<<"\nEnter the col count : ";
	cin>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter the elements in a["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
	}
	cout<<"\nThe array a is : \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<"\nEnter the elements in b["<<i<<"]["<<j<<"] :";
			cin>>b[i][j];
		}
	}
	cout<<"\nThe array b is : \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\nThe final array is : \n";
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	
return 0;	
}
