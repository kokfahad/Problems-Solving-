/******************************************************************************

                            Online C# Compiler.
                Code, Compile, Run and Debug C# program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

using System;
using System.Collections.Generic;

class alignment {
  static void Main() {
    string str  = "amar sonar bangla ami tomay valobashi cirodin tomr akash tomr batash";
          int window_size = 10;
          List<string>s=new List<string>();
          
          for(int i=0;i<str.Length;i++)
          {
              if(str[i]==' ') continue;
              int j=i;
              string tem="";
              while(j<str.Length && str[j]!=' ')
              {
                  tem+=str[j];
                  j++;
              }
              i=j-1;
              s.Add(tem);
          }
          string ans="";
          for(int i=0;i<s.Count;i++)
          {
              string line=s[i];
              int len=s[i].Length;
              int j=i+1;
              while(j<s.Count && len+s[j].Length+1)
              {
                  len+=s[j].Length+1;
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

          Console.WriteLine(ans);
  }
}
