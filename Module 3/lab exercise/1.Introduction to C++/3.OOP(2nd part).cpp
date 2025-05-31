#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
	void set_data(int length, int breadth)
	{
		 this->length =length;
		 this->breadth =breadth;
	}
	int areaOfRectangle()
	{
	   return length*breadth;	
	}	
		
};
int main()
{
	Rectangle r1;
	int length,breadth;
	cout<<"\nEnter the length : ";
	cin>>length;
	cout<<"\nEnter the breadth : ";
	cin>>breadth;
	r1.set_data(length,breadth);
	int result = r1.areaOfRectangle();
	cout<<"\nArea of rectangle is : "<<result;
	return 0;
	}
