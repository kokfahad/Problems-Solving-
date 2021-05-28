#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  node *next;
};

void circluar_linked_list(node *first)
{
    node *temp=first;

    if(first!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;

        while(temp!=first)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }

}

int main()
{
    node *head= new node();
    node *first= new node();
    node *second= new node();
    node *third= new node();

    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=head;

   // circluar_linked_list(head);
    circluar_linked_list(first);

}
