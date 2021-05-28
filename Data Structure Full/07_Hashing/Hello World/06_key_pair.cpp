#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n = 6, x = 15;
  int arr[] = {1, 4, 45, 6, 10, 8};
  unordered_map<int,int>m;
  for(int i=0;i<n;i++)
  {
    m[arr[i]]++;
  }

  for(auto it=m.begin();it!=m.end();it++)
  {
      int key=it->first;
      int val=it->second;
      int pair=x-key;
      if(pair==key && val>1)
      {   
          cout<<"key pair matched"<<endl;
          return 0;
      }
      else{
          if(m.find(pair)!=m.end())
          {
            cout<<"key pair matched"<<endl;
            return 0;
          }
      }
  }
//   cout<<"key pair not matched"<<endl;

}