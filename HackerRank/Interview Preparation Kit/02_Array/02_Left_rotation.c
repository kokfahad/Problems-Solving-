#include<stdio.h>

int main()
{
    long long int n,arr[1000000];
    int i,j,temp,k;
    //printf("Enter size of an array: ");
    scanf("%lld",&n);
    //printf("How many time you want to left rotate: ");
    scanf("%d",&k);
    //printf("Give values in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }


    for(i=0;i<k;i++)
    {
        temp=arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=temp;

    }

    //printf("After left Roatation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

