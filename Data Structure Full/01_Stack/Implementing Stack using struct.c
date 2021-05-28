#include<stdio.h>
#define MAX_STACK 100

typedef struct{
  int top;
  int data[MAX_STACK];
}stack;


void push(stack *s, int item)
{
    if(s->top>MAX_STACK)
    {
        printf("Stack is full!!");
    }
    else{
        s->data[s->top]=item;
        s->top=s->top+1;
    }
}

int pop(stack *s)
{
    int item;
    if(s->top==0)
    {
        printf("Stack is Empty!!\n");
        return -1;
    }
    else{
        s->top=s->top-1;
        item=s->data[s->top];
    }
    return item;
}

int main()
{
    stack mystack;

    mystack.top=0;

    push(&mystack,1);
    push(&mystack,2);
    push(&mystack,3);

    int a,b,c,d;
    a=pop(&mystack);
    printf("%d\n",a);
    b=pop(&mystack);
    printf("%d\n",b);
    c=pop(&mystack);
    printf("%d\n",c);
    d=pop(&mystack);
    printf("%d\n",d);

}

