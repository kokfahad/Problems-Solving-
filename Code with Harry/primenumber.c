#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j;
    int isprime=0;
    printf("Enter Any number: \n");
    scanf("%d",&n);

    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            isprime=1;
        }
    }
    if(isprime==1)
    {
        printf("Not Prime ");

    }
    else
        printf("Prime");

}


