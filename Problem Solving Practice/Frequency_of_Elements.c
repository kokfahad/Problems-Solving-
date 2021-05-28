#include<stdio.h>

int main()
{
   int a[100],b[100],i,j,n,c=0;
   printf("Enter Size of the Array: ");
   scanf("%d",&n);
   printf("Enter elements in the Array: ");

   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }

   for(i=0;i<n;i++)
   {
       c=1;
       if(a[i]!=-1){
       for(j=i+1;j<n;j++)
       {

            if(a[i]==a[j])
            {
               c++;
               a[j]=-1;
            }
          }
          b[i]=c;
       }
   }

   for(i=0;i<n;i++)
   {
       if(a[i]!=-1)
       {
       printf("The Frequency of %d is = %d\n",a[i],b[i]);
       }
   }


}

