#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, sum = 0, counter = 0;
    freopen("input.txt", "r", stdin);
    while(cin >> x){
        sum += x;
        counter ++;
    }
    cout << (double)sum / counter;
}
