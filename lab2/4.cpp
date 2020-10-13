#include<iostream>

using namespace std;

class construct
{
    int length, breadth;

public:

    construct()
    {
        length = 10;
        breadth = 5;
    }

    construct(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
 ~construct()
    {
        cout<<"This is destructor";
    }

};

int main()
{
    construct c(10,5);
    cout<<"The area is: "<<c.area()<<endl;

    return 0;
}
