#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*ptr,i,l;
printf("Enter any string\n");
gets(str);
l=strlen(str);
ptr=str;
printf("%c",*(ptr+0));
for(i=1;i<l;i++)
{
if(*(ptr+i-1)==' ')
printf("%c",*(ptr+i));
}
}
