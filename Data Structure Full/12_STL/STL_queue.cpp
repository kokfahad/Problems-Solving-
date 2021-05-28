#include<bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q)
{
   while(!q.empty())
   {
       cout<<q.front()<<" ";
       q.pop();
   }
   cout<<endl;
}

int main()
{
  queue<int>q;
  q.push(1);  
  q.push(2);  
  q.push(3);  
  q.push(4);
  printQueue(q);  

  cout<<"Size:"<<q.size()<<endl;
  cout<<"Front:"<<q.front()<<endl;
  cout<<"Back:"<<q.back()<<endl;
  cout<<"Empty?:"<<q.empty()<<endl;
}