#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int find)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==find){
            return mid;
        }
        if(find>arr[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
          
    }

   return -1;
}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/arr[0];
    int find=4;
    int res = binary_search(arr,n,find);
    cout<<"Item found at index :"<<res<<endl; 

}