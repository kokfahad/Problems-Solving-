#include<stdio.h>

int main()

{
   int i,n,a[100000]={0},temp=0,count=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
   while(a[i]!=i+1)
   {
       temp=a[i];
       a[i]=a[temp-1];
       a[temp-1]=temp;
       count++;
   }


   }
   printf("%d",count);
}
