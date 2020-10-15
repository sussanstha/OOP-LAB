#include<iostream>

using namespace std;

class complex
{
    float real;
    float img;
    public:
    complex()
    {
        real=0;
        img=0;
    }

    complex(float r,float i)
    {
        real=r;
        img=i;
    }

    complex operator ++() //prefix
    {
        complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;
    }
    complex operator ++(int) //postfix
    {
        complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }

    void showdata()
    {
        cout<<real<<"+i"<<img<<endl;
    }
};

int main()
{
    complex c1(10,20),c2(1.1,2.2),c3;
    c2=++c1;
    c3=c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
