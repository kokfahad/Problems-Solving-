#include<bits/stdc++.h>
using namespace std;

string removeDup(string s)
{
   if(s.length()==0){
       return "";
   } 
   char st=s[0];
   string ans = removeDup(s.substr(1));
   
   if(ans[0]==st){
      return ans;
   }
   else{
       return (st+ans);
   }
}

int main()
{
    cout<<removeDup("aaabbbccce");

}