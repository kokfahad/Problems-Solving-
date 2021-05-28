
#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
public:
    void setdata(int a1, int b1)
    {
      a=a1;
      b=b1;
    }
    void setbysum(complex o1,complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void display()
    {
        cout<<"Your Complex number is "<<a<<"+"<<b<<"i"<<endl;
    }

};



int main()
{
  complex c1,c2,c3;
  c1.setdata(1,2);
  c1.display();
  c2.setdata(3,4);
  c2.display();
  c3.setbysum(c1,c2);
  c3.display();
}
