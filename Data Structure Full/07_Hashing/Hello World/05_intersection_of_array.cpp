#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6,1};
  int b[] = {3, 4, 5, 6, 7,3,4};
  int n=sizeof(a)/sizeof(a[0]); 
  int m=sizeof(b)/sizeof(b[0]);

  unordered_set<int>s;
  for(int i=0;i<n;i++)
  {
      s.insert(a[i]);
  }

  int count=0;
  for(int j=0;j<m;j++)
  {
      int key=b[j];
      if(s.find(key)!=s.end())
      {
          count++;
          s.erase(key);
      }
  }
  cout<<"Ans: "<<count<<endl;

}
