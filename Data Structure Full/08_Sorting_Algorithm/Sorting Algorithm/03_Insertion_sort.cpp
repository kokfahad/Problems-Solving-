#include<bits/stdc++.h>
using namespace std;

void insertions_sort(int arr[], int n)
{
    int item,i,j;
    for(i=1;i<n;i++){
        item=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>item){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=item;
    }

    cout<<"After sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[]={7,1,5,2,45,6,9,0,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertions_sort(arr,n);

}