#include<iostream>
using namespace std;

class employee
{
private:
    int a,b;
public:
    int c,d;

void setdata(int a1, int b1);

void getdata()
{
    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of n: "<<b<<endl;
    cout<<"The value of c: "<<c<<endl;
    cout<<"The value of d: "<<d<<endl;
}


};

void employee::setdata(int a1,int b1)
{
    a=a1;
    b=b1;

}




int main()
{
    employee fahad;
    fahad.c=5;
    fahad.d=5;

    fahad.setdata(1,2);
    fahad.getdata();

}
