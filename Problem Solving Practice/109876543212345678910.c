#include<stdio.h>


int main()
{
    int i;

    for(i=-10;i<=10;i++)
    {
        if(i==-1|| i==0)
        {
            continue;
        }
        else if(i<0)
        {
            printf("%d",-1*i);
        }
        else{
            printf("%d",i);
        }
    }
}


