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

node * reversek(node* &head, int k)
{
    node* prev=NULL;
    node* curr=head;
    node* nxt;
    int count=0;
    while(curr!=NULL && count<k)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
        count++;
    }
    if(nxt!=NULL)
    {
        head->next = reversek(nxt,k);
    }

    return prev;

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

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);

}