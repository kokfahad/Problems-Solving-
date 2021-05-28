#include<bits/stdc++.h>
using namespace std;

map<int,int>m;
int a[10000],b[10000];
int main()
{
    int n;
    cin>>n;
    int j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
        if(m[a[i]]==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    //for only once
    for(int i=0;i<j;i++)
    {
        if(m[b[i]]==1)
            cout<<b[i]<<" ";
    }
    cout<<endl;
    //more than once
    for(int i=0;i<j;i++)
    {
        if(m[b[i]]>1)
            cout<<b[i]<<" ";
    }
    cout<<endl;
}
