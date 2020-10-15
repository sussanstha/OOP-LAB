#include<iostream>

using namespace std;

class comp
{
    float real;
    float img;
    public:
    comp()
    {
        real=0;
        img=0;
    }

    comp(float r,float i)
    {
        real=r;
        img=i;
    }

    void showdata()
    {
        cout<<"The sum is"<<endl;
        cout<<real<<"+i"<<img<<endl;
    }

    friend comp operator +(comp,comp);
};

comp operator +(comp cc1,comp cc2)
{
    comp temp;
    temp.real=cc1.real+cc2.real;
    temp.img=cc1.img+cc2.img;
    return temp;
}

int main()
{
    comp c1(100,200),c2(1.1,2.2),c3;
    c3=c1+c2;
    c3.showdata();
    return 0;
}
