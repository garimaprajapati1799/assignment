#include<iostream>
using namespace std;
int main()
{
	int roll_number = 101;
	string name = "Garima";
	int age = 25;
	double height = 5.1;
	char grade = 'A';
	
	cout<<"\nroll_number : "<<roll_number;
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
	cout<<"\nHieght : "<<height<<" ft";
	//Area of a circle
	const double pi=3.14;//constant
	double circleRadius=5.5;//constant
	double areaOfCircle= pi*circleRadius;
	cout<<"\nArea of a circle : "<<areaOfCircle;
	return 0;	
	}
