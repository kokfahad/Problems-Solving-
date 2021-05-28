#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_set<int>s;
    int arr1[]={1,2,2,1};
    int arr2[]={2,2};

    int n,m;
    n=sizeof(arr1)/sizeof(arr1[0]);
    m=sizeof(arr2)/sizeof(arr2[0]);
    
    for(int i=0;i<n;i++)
    {
       s.insert(arr1[i]); 
    }
    
    int count=0;
    for(int i=0;i<m;i++)
    {
        //int key=arr2[i];
      if(s.find(arr2[i])!=s.end())
      {
          count++;
         s.erase(arr2[i]);
      }
    }
    cout<<"Number of intersection elements: "<<count<<endl;

}