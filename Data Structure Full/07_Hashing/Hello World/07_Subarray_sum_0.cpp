#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={4, 2,-3, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pre_sum=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
       pre_sum+=arr[i];
       if(pre_sum==0)
        {
         cout<<"True"<<endl;
         return 0;
        }

       if(s.find(pre_sum)!=s.end())
       {
           cout<<"True"<<endl;
           return 0;
       }

       s.insert(pre_sum);
             
    }
    cout<<"False"<<endl;
}
