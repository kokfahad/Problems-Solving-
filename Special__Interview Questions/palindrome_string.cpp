#include<bits/stdc++.h>
using namespace std;


int main()
{
    char s[20];
    cout<<"Input a string: "; 
    cin>>s;
    
    int length=strlen(s);
    int flag=0;
    for(int i=0;i<length;i++){
        if(s[i]!=s[length-1-i])
        {
            flag=1;
        }
    }

    if(flag==1){
        cout<<"Not Palindrome"<<endl;
    }
    else{
        cout<<"Palindrome"<<endl;
    }

    
}






// int main()
// {
//  string s="abcba";
// int left=0,right;
// right=s.size()-1;
// while(left<=right)
// {
//     if(s[left]==s[right])
//     {
//         left++;
//         right--;
//     }
//     else
//     {
//         cout<<"string is not palindrome"<<endl;
//         return -1;
//     }
// }
// cout<<"string is palindrome"<<endl;

// }

