#include<stdio.h>

int bubble_sort(int arr[],int n)
{
   int i,j,temp;

   for(i=0;i<n;i++)
   {
       for(j=0;j<n-1-i;j++)
       {
           if(arr[j]>arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }

}



int main()
{
    int i,a,n,x,arr[100];
    printf("Enter size of Element\n");
    scanf("%d",&n);
    printf("Enter the Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    a = bubble_sort(arr,n);

}

