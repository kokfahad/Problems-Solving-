#include<stdio.h>

int main()
{
  int capacity=100,size=6,index=2,element=20;
  int arr[100]={0,2,4,1,9,5};

  if(size>capacity)
  {
      printf("Insertion Unsuccessful");
  }
else
  {
 for(int i=size-1;i>=index;i--)
    {
      arr[i+1]=arr[i];
    }
    arr[index]=element;
    size=size+1;

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Insertion Successful");
  }


}

