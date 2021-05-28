#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}


int main()
{
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial ans: "<<ans<<endl;
}