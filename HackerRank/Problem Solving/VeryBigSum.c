
#include<stdio.h>

int main()
{
    int i,n;

    scanf("%d",&n);
    long arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%lu",&arr[i]);
    }
    long sum =0;

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    printf("%lu",sum);

}

