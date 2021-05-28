#include<iostream>
using namespace std;

struct versity
{
    int id;
    char std_size;
    float fee;

};

 //Union

    union money{

    int id;
    char std_size;
    float fee;
    } ;



int main()
{
    struct versity fahad;
    struct versity rony;

    fahad.id=59;
    fahad.std_size='l';
    fahad.fee=500;

    cout<<fahad.id<<endl;
    cout<<fahad.std_size<<endl;
    cout<<fahad.fee<<endl;

    union money fah;


    fah.id=100;
    //fah.std_size='K';
    //fah.fee=500;

    cout<<fah.id<<endl;
    //cout<<fah.std_size<<endl;






}

