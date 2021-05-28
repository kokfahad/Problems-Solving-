#include<bits/stdc++.h>
using namespace std;

// #define pb                  push_back

string doForLeft(string str, int window_size)
{
    vector<string>s;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ') continue;
        int j=i;
        string tem="";
        while(j<str.size() && str[j]!=' ')
        {
            tem+=str[j];
            j++;
        }
        i=j-1;
        s.push_back(tem);
    }

    string ans="";
    for(int i=0;i<s.size();i++)
    {
        string line=s[i];
        int len=s[i].length();
        int j=i+1;
        while(j<s.size() && len+s[j].length()+1 <=window_size) 
        {
           len+=s[j].length()+1;
           line+=' ';
           line+=s[j];
           j++;
        }
        i=j-1;
        ans+=line;

        while(len<window_size)
        {
            ans+=' ';
            len++;

        }
        ans+='\n';

    }
   return ans;

}

string doForRight(string str, int window_size)
{
    vector<string>s;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ') continue;
        int j=i;
        string tem="";
        while(j<str.size() && str[j]!=' ')
        {
            tem+=str[j];
            j++;
        }
        i=j-1;
        s.push_back(tem);
    }

    string ans="";
    for(int i=0;i<s.size();i++)
    {
        string line=s[i];
        int len=s[i].length();
        int j=i+1;
        while(j<s.size() && s[j].length()+len+1<=window_size)
        {
            len+=s[j].length()+1;
            line+=' ';
            line+=s[j];
            j++;
        }
        i=j-1;
        while(len<window_size)
        {
            ans+=' ';
            len++;
        }
        ans+=line;
        ans+='\n';

    }
    return ans;

    }



int main(){
    string str  = "amar sonar bangla ami tomay valobashi cirodin tomr akash tomr batash";
    int window_size = 20;

    string left_alligned = doForLeft(str, window_size);
    cout << "this is left allignment of the text" << endl;
    cout << left_alligned << endl << endl;

    
    string right_alligned = doForRight(str, window_size);
    cout << "this is right allignment of the text" << endl;
    cout << right_alligned << endl << endl;


  return 0;
}
