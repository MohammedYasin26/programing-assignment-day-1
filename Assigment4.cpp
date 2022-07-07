#include<iostream>
using namespace std;

int main()
{
    float cel,far;
    cout<<"Enter temprature in celsius : "<<endl;
    cin>>cel;
    far=(cel*9.0)/5.0+32;
    cout<<"Temprature in fahrenheit is : "<<far<<endl; 

    return 0;
}