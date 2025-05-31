#include<iostream>
using namespace std;
int globalVar=20;
void localVarInFun()
{
	int localVar=40;
	cout<<"\nInside localVarInFun function : "<<localVar;
}
void globalModification()
{
	globalVar=globalVar+30;
	cout<<"\nInside globalModification Function change global variable "<<globalVar;
}
int main()
{
	int localVar=5;
	cout<<"\nInside main function local variable is : "<<localVar;
	cout<<"\nInside main function global variable is : "<<globalVar;
	localVarInFun();
	globalModification();
	cout<<"\nInside main function changed global variable is : "<<globalVar;
	return 0;
}
