#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100];
    cout<<"Enter a string: ";
    gets(ch);
    int n;
    for( n=0;ch[n]!='\0';n++);

    for(int i=0;i<n/2;i++){
       int tmp=ch[i];
       ch[i]=ch[n-i-1];
       ch[n-i-1]=tmp;
    }

    cout<<"Reverese String : "<<ch<<endl;

}

//Another technique for only word without spzce
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string ch;
//     cout<<"Enter a string: ";
//     cin>>ch;
//     int n=ch.length();
//     for(int i=0;i<n/2;i++){
//        int tmp=ch[i];
//        ch[i]=ch[n-i-1];
//        ch[n-i-1]=tmp;
//     }

//     cout<<"Reverese String : "<<ch<<endl;

// } 

// }