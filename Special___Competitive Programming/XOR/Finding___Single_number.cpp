//Finding single number from array from other double repititive number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    int z=0;
    for(int i=0;i<n;i++)
    {
       z=z^arr[i];
    }

    cout<<"The Single Occured Num: "<<z<<endl;
}
