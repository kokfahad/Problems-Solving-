#include<bits/stdc++.h>
using namespace std;

class emp{
public:
   string name;
   string company;
   int age;
   
   void myself()
   {
       cout<<"Name :"<<name<<endl;
       cout<<"Company :"<<company<<endl;
       cout<<"Age :"<<age<<endl;
   }
    //Each time object created, constructor invoked
   //Creating constructors for initializing values
   emp(string Name,string Company,int Age){
       name= Name;
       company = Company;
       age = Age;
   }
};


int main()
{
    emp emp1=emp("Fahad","Foolan Corp.",25);
    // emp1.name="Fahad";
    // emp1.company="Foolan Corp."; 
    // emp1.age=24; 
    emp1.myself();

}