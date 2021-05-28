#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v ;
    vector<int>:: iterator it ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(8);
    v.push_back(3);
    v.push_back(7);
    
   v.pop_back();
   v.pop_back();

//    auto a=v.begin();
//    cout<<"First Element:" <<a[0]<<endl;
    it=v.begin();
    cout<<"Iterator is: "<<it[0]<<endl;


    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

}