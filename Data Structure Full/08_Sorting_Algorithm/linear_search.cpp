#include<bits/stdc++.h>
using namespace std;

int  linear_search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"Item found= "<<arr[i]<<endl;
            return 0;
        }
    }

    cout<<"Item not found!"<<endl;

    return -1;
}


int main()
{
   int arr[]={1,2,35,3,6,12};
   int n=sizeof(arr)/sizeof(arr[0]);
   int x=35;

   linear_search(arr,n,x);
}
