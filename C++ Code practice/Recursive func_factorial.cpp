#include<iostream>
using namespace std;
int func(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n*func(n-1);
}

int main()
{
    int a;

    cout<<"Give a number :";
    cin>>a;
    cout<<"Factorial is = "<<func(a)<<endl;


}
