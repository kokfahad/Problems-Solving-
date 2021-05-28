#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    
    vector<int>res;
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    
    unordered_set<int>s;
    for(int i=0;i<m;i++)
    {
        s.insert(arr1[i]);

    }

    for(auto it=s.begin();it!=s.end();it++)
    {
       res.push_back(*it);
    }

    for(int j=0;j<n;j++)
    {
        if(s.find(arr2[j])==s.end())
        {
            res.push_back(arr2[j]);
        }
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
}