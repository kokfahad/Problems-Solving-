using System;
using System.Collections.Generic;

namespace alignment
{
    class Program
    {
        static void Main(string[] args)
        {
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
          for(int i=0;i<s.Capacity;i++)
          {
              string line=s[i];
              int len=s[i].Length;
              int j=i+1;
              while(j<s.Capacity && len+s[j].Length+1)
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
}
