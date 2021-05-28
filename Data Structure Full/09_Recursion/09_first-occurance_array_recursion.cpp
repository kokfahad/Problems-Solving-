#include<bits/stdc++.h>
using namespace std;

int firstoc(int arr[],int n,int i,int key)
{
    if(i==n)return -1;

    if(arr[i]==key)
      return i;

    return firstoc(arr,n,i+1,key);  

}

int main()
{
    int arr[]={1,2,3,4,5,3};
    int x=firstoc(arr,6,0,3);
    cout<<"First occurence: "<<x<<endl;

}