#include<iostream>

using namespace std;

inline float area(int len, int brth)
{
    return len * brth;
}

int main()
{
    int l,b;

    cout<<"Enter length and breadth: ";
    cin>>l>>b;

    cout<<"Area is: "<<area(l,b);
    return 0;
}
