#include<stdio.h>

int selection_sort(int arr[],int n)
{
   int i,j, index_min, temp;
    for(i=0;i<n-1;i++)
    {
        index_min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[index_min] > arr[j])
            {
                index_min = j;
            }

        }
        if (index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
    printf("\n\n");
    for (i=0;i<n;i++)
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

    a = selection_sort(arr,n);

}
