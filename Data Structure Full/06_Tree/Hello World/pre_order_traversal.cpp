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

void Preorder(node *node )
{
    if(node==NULL) return;

    //printing data
    cout<<node->data<<" ";
    
    //traversing left part of the tree
    Preorder(node->left);

    //traversing right part of the tree
    Preorder(node->right);


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
    Preorder(root);

}



