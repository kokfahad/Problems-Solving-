#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float pos=0,neg=0,zero=0;

    for(i=0;i<n;i++)
    {

        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
            {zero++;}
    }


    printf("%.6f",pos/n);
    printf("\n%.6f",neg/n);
    printf("\n%.6f",zero/n);

}

