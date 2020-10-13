#include<iostream>

using namespace std;

class complex
{
    int real, img;

public:

    void getdata()
    {
        cout<<"Enter a and b: ";
        cin>>real>>img;
    }

    void showdata()
    {
        cout<<"The sum is: ";
        cout<<real<<"+ i"<<img;
    }

    complex addition(complex c1, complex c2)
    {
        complex sum;
        sum.real = c1.real + c2.real;
        sum.img = c1.img + c2.img;
        return sum;
    }
};

int main()
{
    complex cc1, cc2, c3;
    cc1.getdata();
    cc2.getdata();
    c3 = c3.addition(cc1,cc2);
    c3.showdata();
    return 0;
}
