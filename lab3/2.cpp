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
        cout<<real<<"+i"<<img<<endl;
    }
    friend comp operator ++(comp &);
    friend comp operator ++(comp &,int);
};

comp operator ++(comp &c)
{
    comp temp;
    temp.real=++c.real;
    temp.img=++c.img;
    return temp;
}

comp operator ++(comp &c,int)
{
    comp temp;
    temp.real=c.real++;
    temp.img=c.img++;
    return temp;
}

int main()
{
    comp c1(10,20),c2(1.1,2.2),c3;
    c2=++c1;
    c3=c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
