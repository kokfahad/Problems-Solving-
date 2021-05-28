#include<iostream>
using namespace std;

class constructor
{
    int a,b;
public:
    constructor(int,int);
    void print()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};

constructor::constructor(int x,int y)
{
    a = x;
    b = y;
}


int main()
{
    constructor c(5,7);
    c.print();

}

