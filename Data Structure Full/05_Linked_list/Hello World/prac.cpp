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

node *first(node *head,int newData)
{
    node *newNode= new node();
    newNode->data=newData;
    newNode->next=head;
    head=newNode;

    return head;

}


int main()
{
    node *head=NULL;
    head=first(head,10);
    head=first(head,20);
    head=first(head,50);
    head=first(head,200);
    
    print(head);

}

