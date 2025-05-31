#include<iostream>
using namespace std;
class BankAccount
{
	private:
		int balance=0;
	public:
    int get_balance()
    {
    	return balance;
	}
	void deposit(int amount)
	{
		balance+=amount;
		cout<<"\nTotal balance is : "<<balance;
	}
	void withdraw(int amount)
	{
		balance-=amount;
		cout<<"\nTotal balance after withdrawal : "<<balance;
	}
};
int main()
{
	int amount,choice;
	BankAccount b;
	up:
	cout<<"\nPress 1 for balance enquiry";
	cout<<"\nPress 2 for deposit";
	cout<<"\nPress 3 for withdrawal";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
	case 1:
	{
	 cout<<b.get_balance();
	 break;	
	}
   	case 2:
    	{
        	cout<<"\nEnter the amount : ";
	        cin>>amount;
	        b.deposit(amount);	
	        break;	
	    }
	case 3:
	{
		cout<<"\nEnter the amount : ";
		cin>>amount;
		if(amount>b.get_balance())
		{
			cout<<"\nInsufficient balance";
		}
		else
		{
		b.withdraw(amount);
	}
		break;
	}    
	}
	char temp;
	cout<<"\nPress Y to continue N to exit : ";
	cin>>temp;
	if(temp=='Y' || temp=='y')
	{
		goto up;
	}
	return 0;
}

