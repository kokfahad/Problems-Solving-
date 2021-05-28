#include<iostream>
using namespace std;

class constructor
{
    int a,b;
public:
    constructor(void);
    void print()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};

constructor::constructor(void)
{
    a = 0;
    b = 1;
}


int main()
{
    constructor c;
    c.print();

}
