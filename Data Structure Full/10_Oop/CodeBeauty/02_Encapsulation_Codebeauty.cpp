#include<bits/stdc++.h>
using namespace std;

class emp{
  
  string name;
  string company;
  int age;

public:
//setter
void setName(string Name){
   name=Name;
}
//getter
string getName(){
    return name;
}

void setCompany(string Company){
   company=Company;
}
string getCompany(){
    return company;    
}

void setAge(int Age){
   age=Age;
}
int getAge(){
    return age;    
}

};


int main()
{
    emp emp1;
    emp1.setName("Boltu vai");
    emp1.setAge(23);
    cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old."<<endl;
   

}