#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={-1,2,-3,4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
              swap(arr[i],arr[j]);

           j++;   
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
 
    
}