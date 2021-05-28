#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node *next;
  node *prev;
};

void print(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<endl;
        n=n->next;
    }
}



void Doubly(node **head_ref, int newdata)
{
   node *newNode = new node();
   newNode->data=newdata;
   newNode->next=*head_ref;
   newNode->prev=NULL;

   if(*head_ref!=NULL)
   {
       (*head_ref)->prev= newNode;
   }

  (*head_ref)=newNode;

}




int main()
{
    node *head=NULL;
    Doubly(&head,10);
    Doubly(&head,20);
    Doubly(&head,50);
    Doubly(&head,200);
    Doubly(&head,1000);

    print(head);

}

