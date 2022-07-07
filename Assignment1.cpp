#include <iostream>
using namespace std;

int main()
{

    int p,t,r,SI;

    cout<<"Enter the principle amount :"<<endl;
    cin>>p;

    cout<<"Enter the time period :"<<endl;
    cin>>t;

    cout<<"Enter the rate of interest :"<<endl;
    cin>>r;

    SI=(p*t*r)/100;

    cout<<"Simple interest = "<<SI<<endl;
    
    return 0; 
}