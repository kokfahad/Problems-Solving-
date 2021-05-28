#include<bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index= i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        if(min_index!=i){
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }

    cout<<"After Selection Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
 
int main()
{
    int arr[]={2,5,0,7,1,1,2,5,9,78,87};
    int n=sizeof(arr)/sizeof(arr[0]);
    Selection_sort(arr,n);
}