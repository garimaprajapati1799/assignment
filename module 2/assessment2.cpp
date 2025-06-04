#include<iostream>
#include<cmath>
using namespace std;
class Event
{
	private:
	//Details of events	
	string event;
	string name;
	int numOfGuest;
	int min;
	double Cost1;
	double Cost2;
	//constant cost values
	
   const double CostPerHour = 18.50;
   const double CostPerMinute = .40;
   const double CostOfDinner = 20.70;

	//Calculated values
	int numOfServer;
	double CostForOneServer;
	double totalFoodCost;
	double averageCostPerPerson;
	double getTotalCost;
	double totalCost;
	double deposit_amount;
	
	public:
    void set_input()
    {
	cout<<"\nEnter the name of the event : ";
	cin>>event;
	cout<<"\nEnter customer's first name and last name : ";
	cin.ignore();
	getline(cin,name);
	cout<<"\nEnter the number of guest : ";
	cin>>numOfGuest;
	cout<<"\nEnter the number of minutes in the event : ";
	cin>>min;
}
void cal_server()
{
   numOfServer=(int)(ceil((float)numOfGuest/20));
}
void getCostOfOneServer()
{
	Cost1 = (min/ 60) * CostPerHour;
    Cost2 = (min% 60) * CostPerMinute;
    CostForOneServer = Cost1 + Cost2;
}
void calculateCost()
{
  totalFoodCost= numOfGuest*CostOfDinner;
  averageCostPerPerson= totalFoodCost/numOfGuest;
  totalCost = totalFoodCost + (CostForOneServer * numOfServer);
  deposit_amount = totalCost*0.25<<"Rupees"<<endl;
  
}

void display_details()
{
	cout<<"\nName of the event : "<<event<<endl;
	cout<<"\nCostumer's name : "<<name<<endl;
	cout<<"\nNumber of guest : "<<numOfGuest<<endl;
    cout<<"\nNumber of minutes : "<<min<<endl;
    cout<<"\n===============Event estimate for : "<<name<<"==============";
	cout<<"\nNumber of servers : "<<numOfServer<<endl;
    cout<<"\nCost for one server : "<<CostForOneServer<<endl;
	cout<<"\nThe cost for food is : "<<totalFoodCost<<endl;
	cout<<"\nAverage cost per person : "<<averageCostPerPerson<<endl;
	cout<<"\n";
	cout<<"\nTotal cost is : "<<totalCost<<endl;
	cout<<"\nPlease deposit a 25% deposit to reserve the event";
	cout<<"\nThe deposit needed is : "<<deposit_amount<<endl;
}
};
int main()
{
    Event e;
    e.set_input();
	e.cal_server();
	e.getCostOfOneServer();
	e.calculateCost();
	e.display_details();
	return 0;
}
