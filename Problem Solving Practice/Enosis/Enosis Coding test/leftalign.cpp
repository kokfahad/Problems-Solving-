#include<bits/stdc++.h>
using namespace std;

#define pb                  push_back

string doForLeft(string str, int window_size){
   
    vector<string> s; // this will contain induvidual string word
    for(int i=0; i < str.size(); i++){
        if(str[i]==' ') continue; 
        int j=i;
        string tem = "";
        while(j<str.size() && str[j] !=' '){
            tem += str[j];
            j++;
        }
        i = j - 1;
        s.pb(tem);
    }
   
    string ans = ""; /// ans is the final string that is alligned
    
    for(int i=0; i<s.size(); i++){
        string line = s[i]; // line is a single line in the final string
        int len = s[i].length();
        int j = i + 1;
        while(j < s.size() && len + s[j].length() + 1<= window_size){
            len += 1 + s[j].length();
            line += ' ';
            line += s[j];
            j++;
        }
        i = j-1;
        ans += line ;
        while(len<window_size){ // adding empty space for filling up the rest positions
            ans += ' ';
            len ++;
        }
        ans += '\n';
    }
    return ans;

}

int main(){
    string str  = "amar sonar bangla ami tomay valobashi cirodin tomr akash tomr batash";
    int window_size = 10;

    string left_alligned = doForLeft(str, window_size);
    cout << "this is left allignment of the text" << endl;
    cout << left_alligned << endl << endl;


  return 0;
}

