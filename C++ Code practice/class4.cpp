#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
public:
    void setid(void)
    {
        cout<<"Enter a id:";
        cin>>id;
    }
    void getid(void)
    {
        cout<<"Your id is: "<<id<<endl;
    }

};



int main()
{
    Employee fb[4];

    for(int i=0;i<4;i++)
    {
       fb[i].setid();
       fb[i].getid();
    }

}
