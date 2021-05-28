#include<iostream>
#include<string>
using namespace std;

class binary
{
private:
    string s;

public:
    void read();
    void check(void);
    void ones_comp();
    void display();

};

void binary :: read()
{
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void binary :: check(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"number is invalid"<<endl;
            exit(0);
        }
    }
}

void binary::ones_comp()
{

  for(int i=0;i<s.length();i++){

    if(s.at(i)=='0')
    {
        s.at(i)='1';
    }
    else
    {
        s.at(i)='0';
    }
  }
}




void binary :: display()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }

    cout<<endl;
}






int main()
{
    binary b;

    b.read();
    b.check();
    b.display();
    b.ones_comp();
    b.display();



}

