#include<stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int a;
    a=sizeof(arr)/sizeof(arr[0]);
    printf("Size of array = %d",a);
}
