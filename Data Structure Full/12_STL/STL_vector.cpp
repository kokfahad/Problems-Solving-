#include<bits/stdc++.h>
using namespace std;

// void printVector()
// {

// }

int main()
{
 vector<int>v;
 vector<int>:: iterator it;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
 cout<<endl;
 cout<<v.size()<<endl;
 
 cout<<v.empty()<<endl;

}