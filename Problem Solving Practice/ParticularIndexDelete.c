#include<stdio.h>

int main()
{
   char name[10];
   int i,in;
   printf("Enter a String: ");
   gets(name);

   printf("\nWhich Index you want to delete: ");
   scanf("%d",&in);

   for(i=in;i<strlen(name)-1;i++)
   {

       name[i]=name[i+1];


   }
   name[strlen(name)-1]='\0';
   printf("\nResultant string after deletion: ");
   printf("%s",name);

   //for(i=0;i<strlen(name);i++)
   //{
     //   printf("%c",name[i]);
   //}

       //printf("%s",name);



}
