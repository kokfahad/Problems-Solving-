#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int fac=1;
    for(int i=2;i<=n;i++)
    {
        fac*=i;
    }
    return fac;
}

int main()
{
    int r,n;
    cin>>n>>r;
    
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr ans: "<<ans<<endl;
}