#include<stdio.h>

int main()
{
    int num,fact=1,i;

    printf("Give a number: ");
    scanf("%d",&num);

    if(num == 0 || num == 1)
    {
        printf("\nfactorial of given number: 1");
    }

    else
    {

    for(i=1;i<=num;i++)
    {
        fact = fact * i;
    }
    printf("Factorial of given number: %d",fact);
    }

}

