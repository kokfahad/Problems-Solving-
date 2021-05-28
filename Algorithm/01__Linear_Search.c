#include<stdio.h>

int linear_search(int arr[],int n, int x)
{
    int i;
    for(i=0;i<n;i++)
    {
       if(arr[i]==x)
       {
           return i;
       }
    }
    i =-1;
    return i;
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
    a = linear_search(arr,n,x);
    printf("\n\n%d",a);
}
