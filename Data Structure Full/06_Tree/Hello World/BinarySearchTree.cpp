#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node* newNode(int newData)
{
    node *element = new node();
    element->data=newData;
    element->left=NULL;
    element->right=NULL;

    return element;
}

node* Binary_search_tree(node *root, int key)
{
   if(root==NULL || root->data==key)
      return root;
    
   if(root->data<key)
       return Binary_search_tree(root->right,key);

   return Binary_search_tree(root->left,key);    

}


int main()
{
    node *root;
    root=newNode(4);
    root->left=newNode(2);
    root->right=newNode(5);
    root->left->left=newNode(1);
    root->left->right=newNode(3);
    
    node* address =Binary_search_tree(root,4);
    cout<<address->data<<endl;
    
}
