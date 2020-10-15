#include<iostream>

using namespace std;

class matrix
{
    int m[3][3];
    public:
    void getdata()
    {
        cout<<"Enter a matrix:"<<endl;
        for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        cin>>m[i][j];

    }

    matrix operator *(matrix &M)
    {
    int sum;
    matrix temp;
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    sum=0;
    for(int k=0;k<3;k++)
    {
    sum=sum+m[i][k]*M.m[k][j];
    }
    temp.m[i][j]=sum;
    }
    }
    return temp;
    }

    void showdata()
    {
    cout<<"The product matrix is"<<endl;
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    cout<<m[i][j]<<" ";

    cout<<endl;
    }
    }
};

int main()
{
matrix m1, m2, m3;
m1.getdata();
m2.getdata();
m3=m1 * m2;
m3.showdata();
return 0;
}
