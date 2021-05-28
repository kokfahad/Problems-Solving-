#include<iostream>
using namespace std;

int func(int a,int b)
{
    int sum=a+b;
    return sum;
}

//Function Prototyping
void g();


int main()
{
    int x,y;
    g();
    cout<<"Enter 1st and 2nd value: "<<endl;
    cin>>x>>y;

    cout<<func(x,y)<<endl;

}

void g()
{
   cout<<"Hello,Good Morning\n";
}



