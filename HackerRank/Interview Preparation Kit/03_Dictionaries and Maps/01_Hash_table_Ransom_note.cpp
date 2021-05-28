#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;

    string mag[30000];
    string nt[30000];
    for(int i=0;i<m;i++)
    {
        cin>>mag[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>nt[i];
    }

    map<string,int>k;
    for(int i=0;i<m;i++)
    {
       k[mag[i]]++;
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(k[nt[i]]>0)
        {
            k[nt[i]]--;
        }
        else
        {
          counter=1;
        }
    }

    if(counter==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }




}
