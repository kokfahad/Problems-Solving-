#include<stdio.h>
#include <math.h>

int main()
{
    int sum=0;
    int n,i,j;
    printf("Give the value of n on ur n x n matrix:\n");
    scanf("%d",&n);
    int ar[n][n];

    printf("Give the matrix values:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){

            scanf("%d",&ar[i][j]);
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum = sum + ar[i][j];
            }

        }
    }
    int sum1=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
                sum1 = sum1 + ar[i][j];
            }

        }
    }


    printf("%d",sum-sum1);









}








