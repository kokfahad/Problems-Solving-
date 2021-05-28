#include<bits/stdc++.h>
using namespace std;


void prime(int* p)
{
    int i,j,c=0;
    for(i=2;i<1000;i++)
    {
        for(j=2;j<=i;i++)
        {
            if(i%j==0)
            {
               break;
            }

        }
        if(j==i)
            {
                p[c++]=i;
            }

        if(c==26)
        {
            break;
        }
    }
}



int main()
{
    string s;
    int t;
    cin>>t;

    int* p;
    p=new int[26];
    prime(p);

    while(t--)
    {
        cin>>s;
        int len=s.length();
        long key;
        int ch;

        map<long,int>m;
        map<long,int>::iterator it;

        for(int i=1;i<=len;i++)
        {
            for(int j=0;j<len-i;i++)
            {
                 int range=i+j-1;
                key=1;
                for(int k=j;k<=range;k++)
                {
                    ch=s[k]-97;
                    key=((p[ch]*key)%10000000007);

                }
                m[key]++;
            }
        }
        int res=0;

        for(it=m.begin();it!=m.end();it++)
        {
             int value=it->second;
             if(value>=2)
             {
                 res=res+(value*(value-1))/2;
             }
        }
        cout<<res;



    }
}
