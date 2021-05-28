#include<bits/stdc++.h>
using namespace std;

int add(int n)
{
    if(n==0)return 0;
     
    int prev=add(n-1);

    return n+prev; 
    
}

int main()
{
    int x=add(6);
    cout<<"After adding : "<<x<<endl;
}