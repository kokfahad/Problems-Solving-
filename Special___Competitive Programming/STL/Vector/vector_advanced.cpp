#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    //vector<int>:: iterator it ;
    
    v.assign(3,5);
    v.push_back(7);
    v.push_back(2);
    
    v.insert(v.begin()+3,15);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //v.clear();
    cout<<"Vector is empty or not :"<<v.empty();

    vector<int>v1,v2;
    v1.push_back(10);
    v1.push_back(20);
    v2.push_back(80);
    v2.push_back(90);
    v1.swap(v2);
    
    cout<<endl;
    cout<<"After swap v1= "; 
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    
    cout<<endl;

    cout<<"After swap v2= "; 
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }



}