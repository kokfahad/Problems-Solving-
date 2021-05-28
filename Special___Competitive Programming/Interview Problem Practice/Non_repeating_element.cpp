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
    cout<<"non repeating element: "<<endl;

    for(int i=0;i<n;i++)
    {
        if(m[arr[i]]==1){
          cout<<arr[i]<<endl;
           
        }
    }

    return 0;    
}