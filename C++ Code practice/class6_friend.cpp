#include<iostream>
using namespace std;

class complex;

class calculator
{

public:
    int sum(int a,int b)
    {
        return a+b;
    }

    int sumRealComplex(complex,complex);
    int sumCompComplex(complex,complex);
};

class complex
{
    int a,b;

friend int calculator::sumRealComplex(complex,complex);
friend int calculator::sumCompComplex(complex,complex);
public:
    void setNumber(int n1,int n2)
    {
        a=n1;
        b=n2;
    }

    void printNumber()
    {
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int calculator:: sumRealComplex(complex o1,complex o2)
{
    return o1.a+o2.a;
}

int calculator:: sumCompComplex(complex o1,complex o2)
{
    return o1.b+o2.b;
}



int main()
{
    complex o1,o2;
    o1.setNumber(3,4);
    o2.setNumber(2,3);

    calculator calc;
    int res=calc.sumRealComplex(o1,o2);
    cout<<"Sum of Real part of o1 and o2 is = "<<res<<endl;
    int resc=calc.sumCompComplex(o1,o2);
    cout<<"Sum of Complex part of o1 and o2 is = "<<resc<<endl;




}
