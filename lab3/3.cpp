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

    comp operator +(comp c)
    {
        comp temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    void showdata()
    {
        cout<<"The sum is"<<endl;
        cout<<real<<"+i"<<img<<endl;
    }
};

int main()
{
    comp c1(10,20),c2(1.1,2.2),c3;
    c3=c1+c2;
    c3.showdata();
    return 0;
}
