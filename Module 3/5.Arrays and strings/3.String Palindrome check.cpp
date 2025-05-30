#include<iostream>
using namespace std;
int main()
{
	string input;
	int i;
	cout<<"\nEnter the string : ";
	getline(cin,input);
	string temp;
	for(i=input.size()-1;i>=0;i--)
	{
		temp+=input[i];
		
	}
	cout<<temp;
	if(input==temp)
	{
	cout<<"\nString is pallindrome";	
	}
	else
	{
		cout<<"\nString is not pallindrome";
	}
	return 0;
}
