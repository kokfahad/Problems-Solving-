#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=20;
    int *ptr;
    ptr=&a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<a<<endl;

    int **ptr1;
    ptr1=&ptr;
    cout<<ptr1<<endl;
    cout<<**ptr1<<endl;
}
