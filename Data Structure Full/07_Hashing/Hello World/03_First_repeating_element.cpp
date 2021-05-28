#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[]={1, 5, 3, 4, 3, 5, 6};
   int n=sizeof(arr)/sizeof(arr[0]);
   unordered_map<int,int>m;
   
   for(int i=0;i<n;i++)
   {
       m[arr[i]]++;
   }

   for(int j=0;j<n;j++)
   {
       int key=arr[j];
       auto temp=m.find(key);
       if(temp->second>1)
        {
          cout<<"element is: "<<temp->first<<endl;
          break;
        }
   }


}
