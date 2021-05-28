#include<stdio.h>

int main()
{
    int n,i,j,max = -64;
    int arr[6][6];
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
           sum = arr[i][j]+ arr[i][j+1]+ arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+ arr[i+2][j+1]+ arr[i+2][j+2];

           if(sum>max)
           {
               max=sum;
           }

        }
    }
     printf("%d",max);

}
