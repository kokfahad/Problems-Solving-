#include<iostream>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long int* arr=new long int[n+1] ();
    for(long long int i=0;i<n;i++)
    {
        arr[i]={0};
    }
    for(long long int j=0;j<m;j++)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        arr[a]=arr[a]+k;
        if(b+1<=n){
        arr[b+1]=arr[b+1]-k;
        }
    }
    long long sum=0,max1=0;

    for(long long int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>max1)
        {
            max1=sum;
        }
    }
    cout<<max1;


}
