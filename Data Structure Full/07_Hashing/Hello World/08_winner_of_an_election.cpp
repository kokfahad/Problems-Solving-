#include<bits/stdc++.h>
using namespace std;

int main()
{
  string votes[] = {"john","johnny","jackie","johnny","john" ,"jackie","jamie","jamie","john","johnny","jamie","johnny","john"};
  unordered_map<string,int>map;
  int n=sizeof(votes)/sizeof(votes[0]);
  string name="";
  int max_vote=0;

  for(int i=0;i<n;i++)
  {
      map[votes[i]]++;
  }
  for(auto it=map.begin();it!=map.end();it++)
  {
     string key=it->first;
     int val=it->second;
     if(val>max_vote)
     {
         max_vote=val;
         name=key;
     }
     else if(val==max_vote)
     {
         if(key<name)
         {
             name=key;
         }
     }

  }
  cout<<"key:"<<name<<"  "<<"val:"<<max_vote<<endl;

}