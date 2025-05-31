#include<iostream>
using namespace std;
class Calculator
{
	public: 
	void add(int n1,int n2)
	{
		cout<<"\nThe addition of n1 and n2 is : "<<n1+n2;
	}
	void sub(int n1,int n2)
	{
		cout<<"\nThe subtraction of n1 and n2 is : "<<n1-n2;
	}
	void multi(int n1,int n2)
	{
		cout<<"\nThe multiplication of n1 and n2 is : "<<n1*n2;
	}
	void div(int n1,int n2)
	{
		cout<<"\nThe division of n1 and n2 is : "<<n1/n2;
	}	
};
int main()
{
	int n1,n2;
	cout<<"\nEnter first number : ";
	cin>>n1;
	cout<<"\nEnter second number : ";
	cin>>n2;
	Calculator c;
	c.add(n1,n2);
	c.sub(n1,n2);
	c.multi(n1,n2);
	c.div(n1,n2);
	return 0;
}
