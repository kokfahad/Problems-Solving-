#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j;


    printf("Till which number you want to find prime number: ");
    scanf("%d",&n);
    printf("\nList of Prime Numbers:\n");

    for(i=3;i<=n;i++)
    {
        while(i>j){
        for(j=2;j<n;j++)


        {

            if (i%j!=0)
            {
                printf("%d",i);
            }
        }
        }
    }



}


