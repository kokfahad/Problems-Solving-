#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
      return 1;
    else
       return n*fact(n-1);
    
}

int main()
{
    int x = fact(5);
    cout<<"factorial = "<<x<<endl;
}