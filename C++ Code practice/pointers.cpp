#include<iostream>
using namespace std;

int a=26;

int main()
{
    int a=20;
    int* b;
    b=&a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of b: "<<b<<endl;
    cout<<"Value of b: "<<*b<<endl;

    int** c;
    c = &b;
    cout<<"Address of c: "<<c<<endl;
    cout<<"Value of c: "<<**c<<endl;




}

