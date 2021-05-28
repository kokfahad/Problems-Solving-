#include<stdio.h>

int main()
{
    int i;
    int a[3],b[3],awin=0,bwin=0;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            awin++;
        }
        else if (b[i]>a[i])
        {
            bwin++;
        }
    }

 printf("%d %d",awin,bwin);




}

