#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
      for(int i=2;i<=sqrt(x);i++){
          if(x%i==0){
              return false;
          }
      }
      return true;
}


int main()
{

    for(int i=2;i<=100;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

}