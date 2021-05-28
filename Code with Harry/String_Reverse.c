#include<stdio.h>

int main()
{
    int len=0,i,temp;
    char s[]="FahadKhan";

    while(s[len]!= '\0')
    {
        len++;
    }

    printf("The lenth of String: %d",len);

   for(i=0;i<(len-1)/2;i++)
   {


       temp=s[i];
       s[i]=s[len-1-i];
       s[len-1-i]=temp;


   }

   printf("\n%s",s);

}


