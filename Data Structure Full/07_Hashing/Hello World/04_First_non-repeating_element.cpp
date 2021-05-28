#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,1,2,2,3,3,4,4,4,4,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        auto temp=m.find(key);
        if(temp->second==1)
        {
            cout<<"Ans: "<<temp->first<<endl;
            break;
        }
    }


}