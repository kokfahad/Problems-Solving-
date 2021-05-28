#include<stdio.h>

int main()
{
    int i,j,n,p=0,sum=0;
    scanf("%d",&n);
    int arr[n],b[100];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(j=1;j<=100;j++)
    {
        p=0;
        for(i=0;i<n;i++)
        {
           if(j==arr[i])

            p++;
            b[j]=p;


        }

    }

    for(i=1;i<=100;i++)
    {
        j=b[i]/2;
        sum=sum+j;
    }
    printf("%d",sum);

}
