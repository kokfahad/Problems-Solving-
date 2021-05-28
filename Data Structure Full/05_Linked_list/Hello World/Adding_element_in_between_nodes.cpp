#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node *next;
};

void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}

// void first(node **head_ref,int newData)
// {
//     node *newNode= new node();
//     newNode->data=newData;
//     newNode->next=*head_ref;
//     *head_ref = newNode;

// }

void first(node **head_ref, int newdata)
{
    node *newnode= new node();
    newnode->data=newdata;
    newnode->next=*head_ref;
    *head_ref=newnode;

}

 void insertAfter(node *prev_node, int newData){
    node *newNode= new node();
    newNode->data=newData;
    newNode->next=prev_node->next;
    prev_node->next=newNode;

}


int main()
{
    node *head=NULL;
    first(&head,10);
    first(&head,20);
    first(&head,50);
    first(&head,200);
    
   // insertAfter(head->next,500);
    print(head);

}

