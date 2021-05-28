#include<bits/stdc++.h>
#include<iterator>
using namespace std;

int main()
{
    map<int, int>m;
    m.insert({4,10});
    m.insert({5,20});
    m.insert({6,30});

    for(auto it =m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}




