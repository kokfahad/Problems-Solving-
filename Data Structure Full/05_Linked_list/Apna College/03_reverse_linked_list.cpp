#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node * next;
  
  node(int x){
      data=x;
      next=NULL;
  }
};


void insertAtHead(node* &head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=n;
}

void display(node* head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<"->";
        tmp=tmp->next;
    }
    cout<<"NULL"<<endl;
}

node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* next;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    return prev;
}

node* reverseRecursive(node* &head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;

}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    // node* rev= reverse(head);
    // display(rev);

    node* rev1=reverseRecursive(head);
    display(rev1);

}