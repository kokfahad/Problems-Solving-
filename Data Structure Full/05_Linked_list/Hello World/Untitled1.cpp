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


int main()
{
    node *head =new node();
    node *second =new node();
    node *third =new node();

    head->data=10;
    head->next=second;

    second->data=30;
    second->next=third;

    third->data=50;
    third->next=NULL;

    print(head);
}

