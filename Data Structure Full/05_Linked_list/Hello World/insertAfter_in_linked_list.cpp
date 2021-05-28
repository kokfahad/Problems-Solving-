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
  node *head = NULL;

  first(&head,6);
  first(&head,10);
  first(&head,100);
  first(&head,70);
  first(&head,-2000);

  insertAfter(head->next->next->next,5000);


  print(head);

}

