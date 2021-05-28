#include<stdio.h>

#define Q_SIZE 5

typedef struct{
   int data[Q_SIZE+1];
   int head,tail;
}queue;

void enqueue(queue *q, int item)
{
   if((q->tail+1)%(Q_SIZE+1)== q->head)
   {
       printf("Queue is Full\n");
       return 0;
   }
   q->data[q->tail]=item;
   q->tail=(q->tail+1)% (Q_SIZE+1) ;
}

int dequeue(queue *q)
{
  if (q->head == q->tail)
  {
      printf("Queue is Empty\n");
      return -1;
  }
  int item;

  item=q->data[q->head];
  q->head=(q->head+1)%(Q_SIZE+1);

  return item;
}


int main()
{
    queue my_q;
    int item;

    my_q.head=0;
    my_q.tail=0;

    enqueue(&my_q,1);
    printf("%d\n",my_q.tail);

    enqueue(&my_q,2);
    printf("%d\n",my_q.tail);

    printf("Before dequeue head =%d\n",my_q.data[my_q.head]);

    item=dequeue(&my_q);
    printf("After 1 dequeue: %d\n",item);
    item=dequeue(&my_q);
    printf("After 2 dequeue: %d\n",item);
    item=dequeue(&my_q);
    printf("After 3 dequeue: %d\n",item);
}
