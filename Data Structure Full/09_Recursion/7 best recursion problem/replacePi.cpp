#include<bits/stdc++.h>
using namespace std;

void replacePi(string s)
{
    if(s.length()==0){
        return;
    }
    
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.16";
        string res=s.substr(2);
        replacePi(res);
    }
    else{
        cout<<s[0];
        string res1=s.substr(1);
        replacePi(res1);
    }

}


int main()
{
    replacePi("pipppppiiipi");
}