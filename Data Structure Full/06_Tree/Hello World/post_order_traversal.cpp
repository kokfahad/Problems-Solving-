#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* Node(int newdata)
{
    node *newnode=new node();
    newnode->data=newdata;
    newnode->left=NULL;
    newnode->right=NULL;
}

void Postorder(node *node )
{
    if(node==NULL) return;
    
    //traversing left part of the tree
    Postorder(node->left);

    //traversing right part of the tree
    Postorder(node->right);

    //printing data
    cout<<node->data<<" ";

}


int main()
{
    node *root;
    root= Node(1);
    root->left= Node(2);
    root->right= Node(3);
    root->left->left= Node(4);
    root->left->right= Node(5);
    
    //Inorder traversal of tree
    Postorder(root);

}



