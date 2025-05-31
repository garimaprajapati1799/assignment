#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	cout<<"\nEnter the marks of science : ";
	cin>>m1;
	cout<<"\nEnter the marks of mathematics : ";
	cin>>m2;
	cout<<"\nEnter the marks of English : ";
	cin>>m3;
	float percentage=(m1+m2+m3)/3;
	cout<<"\nPercentage is : "<<(m1+m2+m3)/3<<"%";
	if(percentage>30 && percentage<=40)
	{
		cout<<"\nGrade : E ";
	}
	else if(percentage>40 && percentage<=50)
	{
		cout<<"\nGrade : D ";
	}
	else if(percentage>50 && percentage<=60)
	{
		cout<<"\nGrade : C ";
	}
	else if(percentage>60 && percentage<=70)
	{
		cout<<"\nGrade : B ";
	}
	else if(percentage>70 && percentage<=80)
	{
		cout<<"\nGrade : A ";
	}
	else if(percentage>80 && percentage<=90)
	{
		cout<<"\nGrade : A+ ";
	}
	else if(percentage>90 && percentage<=100)
	{
		cout<<"\nGrade : O ";
	}
	return 0;			
}
