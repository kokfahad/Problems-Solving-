#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[10000],word[50],res[10000]="";
    cout<<"Enter a string: ";
    gets(a);
    strcat(a," ");
    int n,j=0;

    for(n=0;a[n]!='\0';n++);
    for(int i=0;i<n;i++){
        if(a[i]==' '){
            word[j]='\0';
            strrev(word);
            strcat(res,word);
            strcat(res," ");
            j=0;
        }

        else{
           word[j]=a[i];
           j++;
        }
    }

    cout<<"Word by Word reverse string: "<<res<<endl;
}