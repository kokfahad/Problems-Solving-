#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
    int l_size,r_size;
    l_size=mid-l+1;
    r_size=r-mid;
    int Left[l_size];
    int Right[r_size];

    for(int i=0;i<l_size;i++){
        Left[i]=arr[l+i];
    }

    for(int i=0; i<r_size;i++){
        Right[i]=arr[mid+1+i];
    }

    int x=0,y=0,z=l; 

    while(x<l_size && y<r_size)
    {
        if(Left[x]<=Right[y])
        {
          arr[z]=Left[x];
          x++;
        }
        else{
            arr[z]=Right[y];
            y++;
        }
        z++;
    }
    while(x<l_size)
    {
        arr[z]=Left[x];
        x++;
        z++;
    }
    while(y<r_size)
    {
        arr[z]=Right[y];
        y++;
        z++;
    }

    


}



void merge_sort(int arr[],int l,int r)
{
    if(l>=r){return;}
    
    int mid=l+ (r-l)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    
    merge(arr,l,mid,r);
    
}



int main()
{
    int arr[]={1,5,6,3,8,4,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0,r;
    r=n-1;
    merge_sort(arr,l,r);

    cout<<"After Merge Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}