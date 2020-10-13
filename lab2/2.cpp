#include<iostream>

using namespace std;

class student
{
    char name[20], address[20];
    int roll, marks;
public:

    void getdata()
    {
        cout<<"Enter name, address, roll, marks: "<<endl;
        cin>>name>>address>>roll>>marks;
    }

    void showdata()
    {
        cout<<"Entered details are: "<<endl;
        cout<<name<<endl<<address<<endl<<roll<<endl<<marks<<endl;
    }
}s[10];

int main()
{
    int i, n;
    cout<<"Enter no. of students: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cout<<"Enter student's details: "<<endl;
        s[i].getdata();
    }

    for(i=0; i<n; i++)
    {
        cout<<"Entered student's details: "<<endl;
        s[i].showdata();
    }
    return 0;
}
