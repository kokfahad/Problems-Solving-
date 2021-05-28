using System;
using System.Collections.Generic; 

namespace getting_started
{


    class Program
    {
        static void Main(string[] args)
        { 
           string str  = "amar sonar bangla ami tomay valobashi cirodin tomr akash tomr batash";
           int window_size = 10;

           string left_alligned = doForLeft(str, window_size);
           Console.WriteLine( "this is left allignment of the text");
           Console.WriteLine(left_alligned);
        }

  public static string doForLeft(string str, int window_size){

    List <string> s= new List<string>(); // this will contain induvidual string word
    for(int i=0; i < str.Length; i++){
        if(str[i]==' ') continue;
        int j=i;
        string tem = "";
        while(j<str.Length && str[j] !=' '){
            tem += str[j];
            j++;
        }
        i = j - 1;
        s.Add(tem);
        
    }

    string ans = ""; /// ans is the final string that is alligned

    for(int i=0; i<s.Capacity; i++){
        string line = s[i]; // line is a single line in the final string
        int len = s[i].Length;
        int j = i + 1;
        while(j < s.Capacity && len + s[j].Length + 1<= window_size){
            len += 1 + s[j].Length;
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
    }
}
