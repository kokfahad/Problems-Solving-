#include<stdio.h>
int main()
{
    int num,i;
    printf("Which table u want to print : ");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
        printf("%d x %d = %d\n",num,i+1,(i+1)*num);
    }

}
