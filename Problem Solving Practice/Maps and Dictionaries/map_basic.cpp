#include<iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator it;

    m["ahad"]=10;
    m["rony"]=20;
    m["nayon"]=30;
    m.insert(make_pair("farhan",50));
    m.insert(make_pair("boltu",100));

    //it=m.begin();
   // cout<< it->first<<"= "<< it->second<<endl;
    for(it=m.begin();it!=m.end();it++)
    {
        cout<< it->first<<"= "<< it->second<<endl;

    }
}



