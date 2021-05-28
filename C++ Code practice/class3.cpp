#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
      void init(){counter=0;}
      void setprice();
      void displayprice();

};

void shop::setprice()
{
    cout<<"Enter Id of your item no. "<<counter +1<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop::displayprice()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"The price of your itemid "<<itemid[i]<<" is = "<<itemprice[i]<<endl;
    }
}




int main()
{
    shop dokan;
    dokan.init();
    dokan.setprice();
    dokan.setprice();
    dokan.setprice();
    dokan.displayprice();


}
