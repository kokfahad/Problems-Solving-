#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }


    return fibonacci(n-1) + fibonacci(n-2); 
}

int main()
{
    int x= fibonacci(7);
    cout<<"Fibonacci = "<<x<<endl;
}