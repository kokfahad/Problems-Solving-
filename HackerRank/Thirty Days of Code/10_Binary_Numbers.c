#include<stdio.h>

int main()
{
    int n,i=0,j,rem;
    scanf("%d",&n);
    int arr[n];
    int cons_one=0, max_one=0;

    while(n!=0)
    {
        rem = n%2;
        n=n/2;

        if(rem==1)
        {
            cons_one++;

         if(cons_one> max_one)
          {
            max_one=cons_one;
          }
        }

        else {cons_one=0;}

    }

   printf("%d",max_one);



}

