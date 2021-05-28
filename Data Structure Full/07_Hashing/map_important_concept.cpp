#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[]={2,3,4,-1,7,10,3,1,1,1,2};
    unordered_map<int,int>m;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        int tmp=arr[i];
        m[tmp]++;
    }

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}