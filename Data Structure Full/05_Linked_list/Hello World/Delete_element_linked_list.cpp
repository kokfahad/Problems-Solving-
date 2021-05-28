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

// void first(node **head_ref,int newData)
// {
//     node *newNode= new node();
//     newNode->data=newData;
//     newNode->next=*head_ref;
//     *head_ref = newNode;

// }

void first(node **head_ref, int newdata)
{
    node *newnode= new node();
    newnode->data=newdata;
    newnode->next=*head_ref;
    *head_ref=newnode;

}

 void Delete(node **head_ref,int key){
    node *tmp,*prev;
    
    tmp=*head_ref;
    if(tmp!=NULL && tmp->data==key)
    {
        *head_ref=tmp->next;
        free(tmp);
        return;
    }

    while(tmp!=NULL && tmp->data!=key)
    {
        prev=tmp;
        tmp=tmp->next;
    }

    if(tmp==NULL)return;

    prev->next=tmp->next;
    free(tmp); 





}


int main()
{
    node *head=NULL;
    first(&head,10);
    first(&head,20);
    first(&head,50);
    first(&head,200);

    
    Delete(&head,200);
    print(head);

}

