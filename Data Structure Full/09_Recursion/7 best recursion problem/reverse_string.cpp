#include<bits/stdc++.h>
using namespace std;

void reve(string s){
   if(s.length()==0){return;}
   string res= s.substr(1);
   reve(res);
   cout<<s[0];
}

int main()
{
    reve("Fahad Khan");

}