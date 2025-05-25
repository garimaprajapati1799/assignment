#include<iostream>
using namespace std;
int factorial(int num)
{

	if(num!=0)
	{
		return (num) * factorial(num-1);
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int num;
	cout<<"\nEnter the value of num : ";
	cin>>num;
	int result= factorial(num);
	cout<<"\nThe factorial of "<<num<<" is : "<<result;
	return 0;
}
