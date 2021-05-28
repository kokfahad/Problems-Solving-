#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000],n;
    cout<<"Give the range: ";
    cin>>n;

    int res1=0,res2=0;

    for(int i=1;i<=n;i++)
    {
        res1^=i;
    }
   // cout<<res1;

    cout<<"Input numbers: "<<endl;

    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        res2^=a[i];
    }

    int res;
    res=res1^res2;

    cout<<"Missing number is: "<<res<<endl;



}

