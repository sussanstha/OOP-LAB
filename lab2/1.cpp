#include<iostream>

using namespace std;

class student
{
	char name[20], address[20];
	int roll, marks;
	public:

		void getdata()
		{
			cout<< "Enter student's name, roll, marks and address: "<<endl;
			cin>>name>>roll>>marks>>address;
		}

		void showdata()
		{
			cout<<"The entered detail is: "<< endl ;
			cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl<<"Marks: "<<marks<<endl<<"Address: "<<address;
		}
}s;

int main()
{
	s.getdata();
	s.showdata();
	return 0;
}
