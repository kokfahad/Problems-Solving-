//Main word by word

#include<stdio.h>
#include<string.h>


int main()
{
   char a[200],res[200]="",word[50];
   int i,j;
   printf("Enter a string: ");
   gets(a);
   strrev(a);
   strcat(a," ");
   printf("\nOrginal string is: %s",a);

   j=0;
   for(i=0;a[i]!='\0';i++)
   {
       if(a[i]==' ')
       {
           word[j]='\0';
           strrev(word);
           strcat(res,word);
           strcat(res," ");
           j=0;
       }
       else
       {
           word[j]=a[i];
           j++;
       }
   }
   printf("\nReverse of string is: %s",res);

}

