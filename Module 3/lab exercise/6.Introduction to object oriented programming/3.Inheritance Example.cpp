#include<iostream>
using namespace std;
class Person
{
	public:
	void display1()
	{
		cout<<"\nHello from parent class ";
	}
};
class Student:public Person
{
	public:
		void display2()
		{
			cout<<"\nHello from student class ";
		}
};
class Teacher:public Person
{
	public:
		void display3()
		{
			cout<<"\nHello from teacher class ";
		}
};
int main()
{
	Student s;
	Teacher t;
	s.display1();
	t.display1 ();
	s.display2();
	t.display3();
	return 0;
}
