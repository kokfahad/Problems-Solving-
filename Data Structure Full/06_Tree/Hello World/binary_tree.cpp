#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* newNode(int newdata)
{
   node *element= new node();
   element->data=newdata;
   element->left=NULL;
   element->right=NULL;
   
   return element;
} 

void print(node *n)
{
    node* m = n;
    while (n!=0)
    {
        cout<<n->data<<endl;
        n=n->left;
        m=m->right;
        cout<<m->data<<endl;

    }
    
}

int main()
{
    node* root;
    root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->right->right=newNode(7);

    print(root);


 


}