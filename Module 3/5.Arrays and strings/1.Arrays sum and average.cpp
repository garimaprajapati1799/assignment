#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i;
	cout<<"\nEnter the size of an array : ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the elements in a["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"\nThe array a is : ";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	int sum=0;
	for(i=0;i<size;i++)
	{
		sum=sum + a[i];
	}
	cout<<"\nThe sum of all the elements in an array : "<<sum;
	cout<<"\nThe average of all the elements in an array : "<<(float)sum/size;
    return 0;	
}
