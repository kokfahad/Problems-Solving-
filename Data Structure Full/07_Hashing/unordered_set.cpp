#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main()
{
   unordered_set<int>s;
   s.insert(1);
   s.insert(2);
   s.insert(3);
   s.insert(4);

   for(auto it=s.begin(); it!=s.end();it++)
   {
       cout<<*it<<endl;
   }

   cout<<"The size of set : "<<s.size()<<endl;

  // s.clear();
  // cout<<"The size of set : "<<s.size()<<endl;

   int key=4;

   if(s.find(key)!=s.end())
   {
       cout<<"element is present"<<endl;
       s.erase(key);
   }
   else
      cout<<"element not present"<<endl;


    int delete_key=1;
    s.erase(delete_key); 


   cout<<"The size of set : "<<s.size()<<endl;
   for(auto it=s.begin(); it!=s.end();it++)
   {
       cout<<*it<<endl;
   }

   if(s.count(3))
   {
       cout<<"element present"<<endl;
   }
   else
   {
       cout<<"element not present"<<endl;
   }

}
