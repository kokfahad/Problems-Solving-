#include<stdio.h>

int main()
{
    int n,i,j;

    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter Array Elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int max=0;

   for(i=0;i<n;i++)
   {
     if (arr[i]>max)
        max = arr[i];
   }

   printf("Max element = %d",max);

}

