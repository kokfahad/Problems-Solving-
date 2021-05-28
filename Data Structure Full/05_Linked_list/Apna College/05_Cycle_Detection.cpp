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

void makeCycle(node* &head,int key)
{
    node * startnode;
    node* tmp=head;
    int count=1;

    while(tmp->next!=NULL)
    {
      if(count==key)
      {
         startnode=tmp;
      }
      tmp=tmp->next;
      count++;
    }
    tmp->next=startnode;
}

bool cycleDetect(node* &head)
{
    node* fast=head;
    node *slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head)
{
    node* fast=head;
    node *slow=head;
    
    do 
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    while(fast!=slow);

    fast=head;

    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;

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
    display(head);
    makeCycle(head,3);
    //display(head);
    cout<<cycleDetect(head)<<endl;
    removeCycle(head);
    cout<<cycleDetect(head)<<endl;



}