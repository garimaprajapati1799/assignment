#include<iostream>
using namespace std;
  int main()
  {
    int i;
    int num,ans;
    cout<<"\nEnter the number : ";
    cin>>num;
    cout<< " The table of "<<num<<" is : \n";
    for(i=1;i<=10;i++)
    {
        ans=num*i;
       
        cout<< num<<" *"<<i<<" ="<<ans<<endl;
    }
    return 0;
  }
