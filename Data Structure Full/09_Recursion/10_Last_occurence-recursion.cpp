#include<bits/stdc++.h>
using namespace std;

int lastoc(int arr[],int n,int i,int key)
{
   int lasts= lastoc(arr,n,i+1,key);
    
    if(lasts!=-1){return lasts;}
    
    if(arr[i]==key){return i;}
       
    return -1;
    
}

int main()
{
    int arr[]={1,2,3,4,5,3};
    int x=lastoc(arr,6,0,5);
    cout<<"Last occurence: "<<x<<endl;

}