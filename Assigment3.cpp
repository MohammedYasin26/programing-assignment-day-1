#include<iostream>
using namespace std;

int main()
{
    int l,w,perimeter,area;
    cout<<"Enter the lenth of a rectangle : "<<endl;
    cin>>l;
    cout<<"Enter the width of a rectangle : "<<endl;
    cin>>w;
    area=l*w;
    perimeter=2*(l+w);
    cout<<"Area of a rectangle : "<<area<<endl;
    cout<<"Perimeter of a rectangle : "<<perimeter;

    return 0;

}