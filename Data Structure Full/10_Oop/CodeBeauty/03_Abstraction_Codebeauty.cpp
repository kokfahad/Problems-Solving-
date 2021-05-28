#include<bits/stdc++.h>
using namespace std;

class AbstractEmployee{
   virtual void askforPromotion()=0;
};

class emp:AbstractEmployee{
  
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
void askforPromotion()
{
    if(age>30){
        cout<<name<<" !!! Got Promoted"<<endl;
    }
    else{
        cout<<name<<" !!!oops sorry No promotion"<<endl;
    }
}

};


int main()
{
    emp emp1;
    emp1.setName("Boltu vai");
    emp1.setAge(35);
    cout<<emp1.getName()<<" is "<<emp1.getAge()<<" years old."<<endl;
    emp1.askforPromotion();
   

}