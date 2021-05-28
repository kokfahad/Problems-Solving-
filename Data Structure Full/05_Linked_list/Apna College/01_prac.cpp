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

int main()
{
    node* head=NULL;
    // insertAtTail(head,1);
    // insertAtTail(head,2);
    // insertAtTail(head,3);
    // display(head);
    insertAtHead(head,4);
    display(head);

}