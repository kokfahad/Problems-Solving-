#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[],int n){
    if(n==0){
        return true;
    }
    bool restArray=checkSorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}


int main()
{
    int arr[]={0,1,2,3,4,5,6};
    bool x=checkSorted(arr,7);
    cout<<"Sorted or not= "<<x<<endl;

}