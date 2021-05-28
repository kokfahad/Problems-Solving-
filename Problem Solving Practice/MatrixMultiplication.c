#include<stdio.h>

int main()
{
    int first[10][10],second[10][10],i,j,k,sum=0,r1,r2,c1,c2;

    printf("Enter size of First matrix :");
    scanf("%d %d",&r1,&c1);

    printf("\n\nEnter size of second matrix :");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
    printf("\nError!!!!!! Again give matrix Size:\n");
    printf("Enter size of first matrix :");
    scanf("%d %d",&r1,&c1);

    printf("\n\nEnter size of Second matrix :");
    scanf("%d %d",&r2,&c2);
    }

    printf("\n\nEnter First matrix: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           scanf("\t%d",&first[i][j]);
        }
    }

    printf("\n\nEnter Second matrix: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           scanf("\t%d",&second[i][j]);
        }
    }


        printf("\n\nThe First matrix: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("First[%d][%d]=%d\n",i,j,first[i][j]);
        }
    }

    printf("\n\nThe Second matrix: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           printf("Second[%d][%d]=%d\n",i,j,second[i][j]);
        }
    }

    int MultiSum[10][10];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
           for(k=0;k<c1;k++)
           {
             sum=sum+first[i][k]*second[k][j];
           }
            MultiSum[i][j]=sum;
            sum=0;
        }
    }

    printf("The Result of matrix multiplication:\n");

    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
       {
          printf("Result[%d][%d]=%d \n",i,j,MultiSum[i][j]);
       }
    }






}
