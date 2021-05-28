#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;
    
    s.insert(10);
    s.insert(20);
    s.insert(30);

    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

    cout<<"Size of elements:"<<s.size()<<endl;
    // s.clear();
    // cout<<"Size of elements:"<<s.size()<<endl;

    int key=20;

    if(s.find(key)!=s.end())
    {
        cout<<"Key found"<<endl;
        auto temp=s.find(key);
        s.erase(temp);
    }
    else{
        cout<<"key not found"<<endl;
    }

    cout<<"Size of elements:"<<s.size()<<endl;

    int cnt=10;
    if(s.count(cnt))
    {
        cout<<"key found"<<endl;
    }

}