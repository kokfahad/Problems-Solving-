#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=12321;
    int num=x;
    int sum=0,rem=0;

    while(num>0){
       rem=num%10;
       sum=sum*10+rem;
       num=num/10;
    }
   // cout<<"reverse is: "<<sum<<endl;
   if(sum==x){
       cout<<"The number is PALINDROME"<<endl;
   }
   else{
       cout<<"The number is not PALINDROME"<<endl;
   }








}