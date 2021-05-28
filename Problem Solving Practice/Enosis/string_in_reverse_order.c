#include<stdio.h>
#include<string.h>

int string_reverse(char str[])
{
    int i;
    for(i=strlen(str)-1;i>=0;i--)
    {
       printf("%c",str[i]);
    }

}

int main()
{
    char str[100];
    printf("Enter a String: ");
    string_reverse(gets(str));
}
