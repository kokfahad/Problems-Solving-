#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n,i;
    string name,number,key;
    map<string,string>phonebook;
    cin>>n;

    for(i=0;i<n;i++)
    {
      cin>>name>>number;
      phonebook[name]=number;
    }

    while(cin>>key)
    {
        if(phonebook.find(key)!=phonebook.end())
        {
            cout<<key<<"="<<phonebook.find(key)->second<<endl;
        }
        else
        {
            cout<<"not found";
        }
    }

}
