#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    if(n%2!=0)
    {
        printf("Weird");
    }
    else if(n%2==0)
    {
        switch(n)
        {
       case 2 ... 5:
        printf("Not Weird");
        break;

       case 6 ... 20:
        printf("Weird");
        break;

       default :
        printf("Not Weird");
        }
    }
}
