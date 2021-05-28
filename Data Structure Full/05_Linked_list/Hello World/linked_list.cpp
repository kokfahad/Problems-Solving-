#include<bits/stdc++.h>
using namespace std;

struct node
{
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
    node *first =new node();
    node *second =new node();

    head->data=10;
    head->next=first;

    first->data=20;
    first->next=second;

    second->data=30;
    second->next=NULL;

    print(head);

    return 0;
}
