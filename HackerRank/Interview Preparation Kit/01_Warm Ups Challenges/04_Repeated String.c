#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    long long int n,x;
    int i,a,p;

    gets(s);
    scanf("%d",&n);
    a=strlen(s);

    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]=='a')
       {
           p++;
       }

    }

    x=n/a;
    p=x*p;
    n=n%a;

    for(i=0;i<n;i++)
    {
        if(s[i]=='a')
        {
            p++;
        }
    }
   printf("%d",p);
}
