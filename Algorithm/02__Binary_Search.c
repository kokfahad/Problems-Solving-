#include<stdio.h>

int binary_search(int arr[],int n, int x)
{
    int mid,left,right;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid= (left + right) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }

        if(x>arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid -1 ;
        }
    }

    return -1;

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
    printf("Enter the number you want to find\n");
    scanf("%d",&x);
    a = binary_search(arr,n,x);
    printf("\n\n%d",a);
}

