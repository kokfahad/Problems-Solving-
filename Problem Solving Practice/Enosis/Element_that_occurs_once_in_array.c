#include<stdio.h>

int main()
{
    int el[10],n,i,j;

    printf("Enter the size of the array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&el[i]);
    }
    int flag;

    for(i=0;i<n;i++)
    {
        flag=1;
       for(j=1;j<n;j++)
       {
          if(el[i]==el[j])
          {
             flag=0;
             break;
          }

       }
        if(flag==1)
          {
              printf("%d",el[i]);
          }

    }
}
