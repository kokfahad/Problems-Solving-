#include<bits/stdc++.h>>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string s1;
    string s2;
    for(int i=0;i<t;i++)
    {
        int arr[26]={0};
        cin>>s1>>s2;
        int len1=s1.length();
        int len2=s2.length();

        int val;

        for(int i=0;i<len1;i++)
        {
            val=s1[i]-97;
            arr[val]++;
        }
        int flag=0;

        for(int i=0;i<len2;i++)
        {
            val=s2[i]-97;
            if(arr[val])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
