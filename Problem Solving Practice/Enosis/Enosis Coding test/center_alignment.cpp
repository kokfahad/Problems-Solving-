#include<bits/stdc++.h>
using namespace std;

string doForCentral(string str, int window_size)
{
   vector<string>s;
   for(int i=0;i<str.size();i++)
   {
       if(str[i]==' ')continue;
       int j=i;
       string temp="";
       while(j<str.size()  && str[j]!=' ')
       {
           temp+=str[j];
           j++;
       }
       s.push_back(temp);
       i=j-1;
   }
   string ans="";

   for(int i=0;i<s.size();i++)
   {
       string line=s[i];
       int len=s[i].length();
       int j=i+1;

       while(j<s.size() && s[j].size()+len+1<=window_size)
       {
          len+=s[j].length()+1;
          line+=' ';
          line+=s[j];
          j++;
       }

       i=j-1;
       int gap=window_size-len;
       int space_for_left=gap/2+gap%2;
       int space_for_right=gap/2;

       while(space_for_left>0)
       {
           ans+=' ';
           space_for_left--;
       }
       ans+=line;
       while(space_for_right>0)
       {
           ans+=' ';
           space_for_right--;
       }
       ans+='\n';
   }
   return ans;
}

int main(){
    string str  = "amar sonar bangla ami tomay valobashi cirodin tomr akash tomr batash";
    int window_size = 10;

    string center_alligned = doForCentral(str, window_size);
    cout << "this is central allignment of the text" << endl;
    cout << center_alligned << endl;



  return 0;
}
