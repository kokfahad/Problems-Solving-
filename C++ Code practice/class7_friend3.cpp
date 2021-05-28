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
    void display(void)
    {
        cout<<"Value of 1st data = "<<data<<endl;
    }


    friend void exchange(X &,Y &);

};

class Y
{
    int data2;
public:
    void setdata(int val2)
    {
        data2=val2;
    }

     void display(void)
    {
        cout<<"Value of 2nd data = "<<data2<<endl;
    }


    friend void exchange(X &,Y &);
};

void exchange(X &o1,Y &o2)
{
    int temp = o1.data;
    o1.data = o2.data2;
    o2.data2 = temp;
}



int main()
{
    X a;
    a.setdata(5);

    Y b;
    b.setdata(10);

    exchange(a,b);

    a.display();
    b.display();

}
