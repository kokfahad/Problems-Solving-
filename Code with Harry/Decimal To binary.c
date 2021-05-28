#include<stdio.h>

int main()
{
    int n,i=0,j,rem;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int arr[n];

    while(n!=0)
    {
        rem = n%2;
        n=n/2;
        arr[i]=rem;
        i++;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }


}
