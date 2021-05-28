
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

void middleElement(node *head)
{
   node *slow_ptr= head;
   node *fast_ptr= head;

   if(head!=NULL)
   {
       while(fast_ptr!=NULL && fast_ptr->next!=NULL)
       {
           fast_ptr=fast_ptr->next->next;
           slow_ptr=slow_ptr->next;
       }
       cout<<"Middle elment is: "<<slow_ptr->data<<endl;
   }

}


int main()
{
    node *head =new node();
    node *second =new node();
    node *third =new node();
    node *fourth =new node();

    head->data=10;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=50;
    third->next=fourth;

    fourth->data=100;
    fourth->next=NULL;

    //print(head);

    middleElement(head);
}

