#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int>m;
    int arr[]={5,11,2,1,9,1,4,7};
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    cout<<" First repeating element: ";
    
    
    for(int i=0;i<n;i++)
    {
        int key =arr[i];
        auto tmp=m.find(key);
        if(tmp->second>1)
         { cout<<i<<endl;
          return 1;
         }
    }


    return 0;    
}