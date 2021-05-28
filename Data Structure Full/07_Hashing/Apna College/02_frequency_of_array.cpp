#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,2,2,4,3,1,3,1,};
    unordered_map<int,int>m;

    for(auto i=0;i<8;i++)
    {
        m[arr[i]]++;
    }
    map<int,int> :: iterator it;

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }

}