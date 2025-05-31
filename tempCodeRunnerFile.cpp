#include<iostream>
using namespace std;
int main()
{
    int a[100],size,index,element,i;
    cout<<"Enter the size of an array : ";
    cin>>size;
    cout<<"The array a is :";
    for(i=0;i<size;i++)
    {
        cout<<"Enter the elemen in a["<<i<<"]"<<"is";
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    cout<<"Enter the index number : ";
    cin>>index;
    cout<<"Enter the element to be insert : ";
    cin>>element;
    for(i=size;i>size;i--)
    {
        a[i]=a[i-1];
    }
    a[index]=element;
    size++;
    cout<<"The new array is :";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}