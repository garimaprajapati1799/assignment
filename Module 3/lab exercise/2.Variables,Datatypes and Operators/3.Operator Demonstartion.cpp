#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	up:
	cout<<"\nEnter the value of num1 : ";
	cin>>n1;
    cout<<"\nEnter the value of num2 : ";
	cin>>n2;
	cout<<"\nEnter the value of num3 : ";
	cin>>n3;	
	cout<<"\nAddition of "<<n1<<" and "<<n2 <<"is : "<<n1+n2<<"\n";
	cout<<"\nSubtraction of "<<n1<<" and "<<n2 <<"is : "<<n1-n2<<"\n";
	cout<<"\nMultiplication of "<<n1<<" and "<<n2 <<"is : "<<n1*n2<<"\n";
	cout<<"\nDivision of "<<n1<<" and "<<n2 <<"is : "<<(float)n1/(float)n2<<"\n";
	int rem=n1%n2;
	cout<<"\nRemainder of "<<n1<<" and "<<n2<<"is : "<<rem<<"\n";
	if(n1>n2 && n1>n3)
	{
		cout<<"\n"<<n1<<" is the greatest number";
	}
	else if(n2>n1 && n2>n3)
	{
	cout<<"\n"<<n2<<" is the greatest number";		
	}
	else if((n1==n2) && (n2==n3))
	{
		cout<<"\n"<<n1<<" "<<n2<<" "<<n3<<" are equal";
	}
	else 
	{
	cout<<"\n"<<n3<<" is the greatest number";	
	}
	char temp;
	cout<<"\nPress Y to continue or Press N to exit";
	cin>>temp;
	
	if(temp=='Y' || temp=='y')
	{
		
		goto up;
	}
	
	
	return 0;
}
