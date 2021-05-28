#include<stdio.h>

int main()
{
   int n,i;
   char s[10000];
   scanf("%d",&n);

   for(i=0;i<n;i++)
  {
      scanf("%s",s);
      myfunction(s);
  }

}

void myfunction(char s[])
{
    for(int i=0;i<strlen(s);i++)
    {
        if(i%2==0)
        {
            printf("%c",s[i]);
        }
    }
    printf(" ");

        for(int i=0;i<strlen(s);i++)
    {
        if(i%2!=0)
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");

}



