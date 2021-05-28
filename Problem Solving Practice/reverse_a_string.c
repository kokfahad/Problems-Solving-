#include<stdio.h>
#include<string.h>

int main()
{
    int i,len;
    char ch[10];

    printf("Enter a string input: ");
   // scanf("%s",ch);
    gets(ch);

    len=strlen(ch);

    for(i=len-1;i>=0;i--)
    {
       printf("%c",ch[i]);
    }
}


