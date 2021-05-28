#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,valley=0,altitude=0;

    scanf("%d",&n);
    char ar[n];
    scanf("%s",ar);


    for(i=0;i<n;i++)
    {
        if(ar[i]=='U')
        {
        altitude++;
            if(altitude==0)
            {
                valley++;
            }
        }
        else
        {
            altitude--;
        }
    }

    printf("%d",valley);


}
