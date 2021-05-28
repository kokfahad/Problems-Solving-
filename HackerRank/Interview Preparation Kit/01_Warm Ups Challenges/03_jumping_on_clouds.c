#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int cloud[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&cloud[i]);
    }

    int start=0,end=n-1,jump=0;

    while(start<end)
    {
        if((start+1)==end)
        {
            start++;
            jump++;
        }
        else if(cloud[start+2]==0)
        {
            start=start+2;
            jump++;
        }
        else
        {
            start++;
            jump++;
        }

    }
    printf("%d",jump);


}
