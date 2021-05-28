#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j,pos=0;
    char ch[20];

    //printf("Enter a string: ");
    gets(ch);
    strcat(ch," ");

    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ' && ch[i+1]!=' ')
        {
           for(j=i;j>=pos;j--)
           cout<<ch[j];

              pos=i+1;

        }

    }
}

