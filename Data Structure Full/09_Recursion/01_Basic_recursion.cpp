#include<bits/stdc++.h>
using namespace std;

void recursion(int x)
{
    if(x==0) return;
    --x;
    cout<<x<<endl;
    recursion(x);
    cout<<x<<endl;
}

int main()
{
    recursion(5);
}