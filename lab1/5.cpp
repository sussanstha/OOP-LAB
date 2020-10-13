#include<iostream>
#define pi 3.14

using namespace std;

int area(int r)
{
    cout<<"Area of circle is: "<<pi*r*r<<endl;
    return 0;
}

int area(int l,int b)
{
    cout<<"Area of rectangle is: "<<l*b<<endl;
    return 0;
}

int main()
{
    int r,l,b;
    cout<<"Enter radius: ";
    cin>>r;
    area(r);
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    area(l,b);
}
