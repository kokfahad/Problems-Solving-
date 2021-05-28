#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>umap;
    umap["fahad"]=59;
    umap["hakim"]=32;
    umap["rana"]=31;
    umap.insert(make_pair("noyon",11));

    // for(auto x:umap)
    //    cout<<x.first<<"  "<<x.second<<endl;
    
    for(auto it=umap.begin();it!=umap.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }

    string key="fahad";
    if(umap.find(key)!=umap.end())
    {
        cout<<"key found"<<endl;
    }
    else
    {
        cout<<"key not found"<<endl;
    }
    cout<<"size :"<<umap.size()<<endl;

    string keys="noyon";
    if(umap.find(keys)!=umap.end())
    {
        auto temp=umap.find(keys);
        cout<<"key is:"<<temp->first<<endl;
        cout<<"value is:"<<temp->second<<endl;
    }
    umap.erase(keys);
    cout<<"size :"<<umap.size()<<endl;

    int arr[]={1,2,3,4,1,2,2,2,2};
    unordered_map<int,int>m;
    for(int i=0;i<9;i++)
    {
        int key=arr[i];
        m[key]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;
    }
}