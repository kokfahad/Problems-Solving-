#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000]={3,4,4,5,6,7,8},res1=0,res2=0;

    int mi=a[0],ma=a[0];
    for(int i=0;i<7;i++)
    {
        if(a[i]<mi)
        {
            mi=a[i];
        }
    }

    for(int i=0;i<7;i++)
    {
        if(a[i]>ma)
        {
            ma=a[i];
        }
    }

    cout<<"Min Number :"<<mi<<endl;
    cout<<"Max Number :"<<ma<<endl;

    for(int i=mi;i<=ma;i++)
    {

        res1^=i;
    }


    for(int i=0;i<7;i++)
    {
        res2^=a[i];
    }

    int res;

    res=res1^res2;

    cout<<"Duplicate number is: "<<res<<endl;





}

