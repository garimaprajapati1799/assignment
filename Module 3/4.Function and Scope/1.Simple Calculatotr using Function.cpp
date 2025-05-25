#include<iostream>
using namespace std;
void sum(int n1,int n2)
{
	cout<<"\nThe sum of "<<n1<<"+"<<n2<< " is "<<n1+n2;
}
void sub(int n1,int n2)
{
	cout<<"\nThe difference of "<<n1<<"-"<<n2<< " is "<<n1-n2;
}
void mul(int n1,int n2)
{
	cout<<"\nThe multiply of "<<n1<<"*"<<n2<< " is "<<n1*n2;
}
void div(int n1,int n2)
{
	cout<<"\nThe division of "<<n1<<"/"<<n2<< " is "<<(float)n1/(float)n2;
}
int main()
{
	int num1,num2;
	char choice;
	cout<<"\nEnter the first number : ";
	cin>>num1;
	cout<<"\nEnter the second number : ";
	cin>>num2;
	cout<<"\nPress + for adiition";
	cout<<"\nPress - for subtraction";
	cout<<"\nPress * for multiplication";
	cout<<"\nPress / for division";
	cout<<"\nEnter the choice : ";
	cin>>choice;
	switch(choice)
   {
     	case '+' :
     	{
        	sum(num1,num2);	
        	break;
         }
        case '-' :
   	    {
   	        sub(num1,num2);
			   break;	
        }
       case '*' :
   	   {
   	        mul(num1,num2);	
   	        break;
       }
      case '/' :
   	   {
   	     div(num1,num2);
			break;	
       }
    
   }
	 
return 0;	
}
