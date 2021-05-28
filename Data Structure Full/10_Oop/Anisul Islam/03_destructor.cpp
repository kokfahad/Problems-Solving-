#include<bits/stdc++.h>
using namespace std;

class student{
   public:
     string name;
     int age;
    
    student(string s, int x)
    {
        name=s;
        age=x;
    }

    void display()
    {
    cout<<"Name: "<<name<<"  Age: "<<age<<endl;
    }
    ~student(){
        cout<<" Destructor is called"<<endl;
    }

};

int main()
{
    student a("Fahad",24),b("Sheikh Muhammad",25);
    a.display();
    b.display();
    

   
}