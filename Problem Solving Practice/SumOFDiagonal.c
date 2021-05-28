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

    printf("\nSum of diagonal = %d",sum);
}
