#include<iostream>
using namespace std;

int swapx(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}



int main()
{
    int x,y;

    cout<<"Enter 1st and 2nd value: "<<endl;
    cin>>x>>y;

    swapx(&x,&y);
    cout<<"vlaue after swap :\n"<<x<<" "<<y;

}

void g()
{
   cout<<"Hello,Good Morning\n";
}




