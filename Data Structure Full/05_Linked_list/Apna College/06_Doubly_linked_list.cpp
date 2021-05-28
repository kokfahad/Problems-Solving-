#include<bits/stdc++.h>
using namespace std;

class node{
   public:
   int data;
   node* next;
   node *prev;

   node(int val)
   {
       data=val;
       next=NULL;
       prev=NULL;
   }
};

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
    head->prev=n;
    }
    head=n;
}

void insertAtTail(node* &head,int val)
{
    node* n= new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=n;
    n->prev=tmp;
}

void deleteAtHead(node* &head)
{
    node* tmp=head;
    head->next->prev=NULL;
    head=head->next;
    delete(tmp);

}

void deleteNode(node* &head,int pos)
{
    int count=1;
    node* tmp=head;
    while(tmp!=NULL && count!=pos)
    {
        tmp=tmp->next;
        count++;
    }
    tmp->prev->next=tmp->next;
    if(tmp->next!=NULL){
    tmp->next->prev=tmp->prev;
    }
    delete(tmp);
}

void display(node* &head)
{
    node* tmp=head;
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
    display(head);
    // insertAtHead(head,5);
    // display(head);
    // deleteNode(head,2);
    // display(head);
    deleteAtHead(head);
    display(head);


}