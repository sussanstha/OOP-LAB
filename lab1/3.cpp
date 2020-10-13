#include<iostream>

using namespace std;

int sum(int a=5, int b=10, int c=20)
{
    return a+b+c;
}

int main()
{
    cout<<"The sum is: "<<sum(5)<<endl;
    cout<<"The sum is: "<<sum(5,5)<<endl;
    cout<<"The sum is: "<<sum(5,5,5)<<endl;
}
