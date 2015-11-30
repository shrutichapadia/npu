#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main(){
  char value = 'a';
  QueType* queue;
  queue = CreateQueue();
  while(value <='f'){
    Enqueue(queue,value);
    value++;
  }
  while(!IsQueueEmpty(queue)){
    Dequeue(queue,&value);
    printf("%c\n",value);
  }
  DestroyQueue(queue);
  return 0;
}
