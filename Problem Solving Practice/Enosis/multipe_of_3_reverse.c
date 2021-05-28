#include<stdio.h>
#include<string.h>

void mul_rev(int range)
{
    int i;

    for(i=range;i>=1;i--)
    {
       if(i%3==0)
       {
           printf("%d ",i);
       }
    }

}

int main()
{
    mul_rev(20);
}
