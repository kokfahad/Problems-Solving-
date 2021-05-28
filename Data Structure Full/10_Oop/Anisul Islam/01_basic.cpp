#include<bits/stdc++.h>
using namespace std;

class student{
   public:
     string name;
     int age;
    
    void setValue(string s, int a){
      name=s;
      age=a;
    }

    void display()
    {
    cout<<"Name: "<<name<<"  Age: "<<age<<endl;
    }

};

int main()
{
    student a,b;
    // a.name="Fahad";
    // a.age=24;
    // b.name="Ahad";
    // b.age=25;

    a.setValue("Fahad Khan",25);
    b.setValue("boltu",23);

    a.display();
    b.display();

    // cout<<"Name: "<<a.name<<"  Age: "<<a.age<<endl;
    // cout<<"Name: "<<b.name<<"  Age: "<<b.age<<endl;
   
}