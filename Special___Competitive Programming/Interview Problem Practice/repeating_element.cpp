#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int>m;
    int arr[]={1,2,2,1,9,1,4};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    cout<<"repeating element: "<<endl;
    
    int j=0,b[10000];
    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]>1){
          b[j]=arr[i];
           j++;
        }
    }

    for(int i=0;i<j;i++)
    {
        if(m[b[i]]>1)
        {
            cout<<b[i]<<" "; 
        }
    }

    return 0;    
}