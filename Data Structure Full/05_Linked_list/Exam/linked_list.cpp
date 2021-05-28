#include<bits/stdc++.h>
using namespace std;

class node{
   public: 
   int data;
   node* next;

   node(int val){
       data=val;
       next=NULL;
   }
};

void insertAthead(node* &head,int val)
{
   node* n=new node(val);
   if(head==NULL)
   {
       head=n;
       return;
   }
   n->next=head;
   head=n;
}

void insertAtTail(node* &head,int val)
{
    node *n=new node(val);
    if(head==NULL)
    {
      head=n;
      return;
    }
    node*tmp=head;

    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=n;

}

bool search(node* &head,int val)
{
     node* tmp=head;
     while(tmp!=NULL)
     {
         if(tmp->data==val)
            return true;

       tmp=tmp->next;     
     }
    return false;
}

void display(node *head)
{
    node *tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<"->";
        tmp=tmp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtHead(node * &head)
{
    node *todelete=head;
    head=head->next;
    delete(todelete);
}


void deletes(node * &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next=NULL)
    {
        deleteAtHead(head);
    }

    node *tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->next->data==val){
            node* todelete;
            todelete=tmp->next;
            tmp->next=tmp->next->next;
            delete(todelete);
            return;
            }
         tmp=tmp->next;   
    }
    
}

int main()
{
   node* head=NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   display(head);
   insertAthead(head,5);
   display(head);
   cout<<search(head,3)<<endl;
   deletes(head,1);
   display(head);
   deleteAtHead(head);
   display(head);
}