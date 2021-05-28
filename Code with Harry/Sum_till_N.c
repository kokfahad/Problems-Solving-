#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Till which number u ant to sum of : ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i;



    }
    printf("1+2+3+....+%d=%d",num,sum);

}
