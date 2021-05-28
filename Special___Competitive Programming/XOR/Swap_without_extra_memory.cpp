#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Input Numbers"<<endl;
    cin>>a>>b;
    cout<<"Before swap:a= "<<a<<"  Before swap:b= "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"After swap:a= "<<a<<"  After swap:b= "<<b<<endl;
}

