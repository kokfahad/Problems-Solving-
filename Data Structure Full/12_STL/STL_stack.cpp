#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> s)
{
    while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
    }
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    printStack(s);
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
}