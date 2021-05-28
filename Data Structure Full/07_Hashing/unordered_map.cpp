#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int>m;
    m["fahad"]=1;
    m["fahim"]=2;
    m["rony"]=3;
    m["rahat"]=4;
    m.insert(make_pair("radh",7));
    m.insert(make_pair("afrin",14));
    
    // for(auto it:m)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;     
    // }
    // cout<<"Size of map: "<<m.size()<<endl;

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Size of map: "<<m.size()<<endl;

    string key="fahad";
    
    if(m.find(key)!=m.end())
    {
        cout<<"key is present"<<endl;
        cout<<"key is: "<<key<<endl;
    }
    else{
        cout<<"key not present"<<endl;
    }

        if(m.find(key)!=m.end())
    {
        auto tmp=m.find(key);
        cout<<"key is: "<<tmp->first<<endl;
        cout<<"value is: "<<tmp->second<<endl;
    }
    auto del="rony";
    m.erase(del);

        for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Size of map: "<<m.size()<<endl;


}