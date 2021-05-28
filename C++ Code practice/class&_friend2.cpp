#include<iostream>
using namespace std;

class Y;

class X
{
    int data;
public:
    void setdata(int val)
    {
        data=val;
    }
    friend void sum(X,Y);

};

class Y
{
    int data2;
public:
    void setdata(int val2)
    {
        data2=val2;
    }

    friend void sum(X,Y);
};

void sum(X o1,Y o2)
{
    cout<<o1.data+o2.data2<<endl;
}



int main()
{
    X a;
    a.setdata(5);

    Y b;
    b.setdata(10);

    sum(a,b);

}
