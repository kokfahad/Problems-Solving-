#include<stdio.h>

int main()
{
    int i,j,n,arr[1000],temp,k;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    printf("Give values in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("How many time you want to left rotate: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        temp=arr[0];
        for(j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[j]=temp;

    }

    printf("After left Roatation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
