#include<stdio.h>

int main()
{
    int i=0,n,sum=0;

    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);


}
