#include <stdio.h>
#include <stdlib.h>
// #include "queue.h"
struct node{
  char key;
  struct node* next;
};
typedef struct node NodeType;
typedef struct queue QueType;
//structure of queue
struct queue{
  NodeType* Qfront;
  NodeType* Qend;
};
// create queue
QueType* CreateQueue(){
  QueType* q = (QueType*)malloc(sizeof(QueType)*1);
  q->Qfront = NULL;
  q->Qend = NULL;
  return q;
}
//add new item to queue
 int Enqueue(QueType* q, int newitem){
  NodeType* newNode;
  newNode = (NodeType*)malloc(sizeof(NodeType)*1);
  newNode->key = newitem;
  newNode->next = NULL;
  if(q->Qend == NULL){
    q->Qfront = newNode;
  }
  else
    q->Qend->next = newNode;
    q->Qend = newNode;
    return 0;
}
// displays the contents of the queue
void display (QueType *q )
{
    printf ( "\n" ) ;
while ( q != NULL )
    {
        printf ( "%d ", q ->key ) ;
        q = q -> next ;
    }
}
/* concatenates two linked lists */
void concatqueue ( QueType* q1, QueType* q2)
{
    struct node *temp ;
//if the first queue is empty
if ( *q1 == NULL )
        *q1 = *q2 ;
  else {                        //if both queue are non-empty
      if ( *q2 != NULL ){
            temp = *q1 ;  //points to the starting of the first queue
            while ( temp ->next != NULL )
                temp = temp ->next ;
            temp ->next = *q2 ;  //concatenate the second queue after the first
        }
    }
}
// remove front item from queue
void Dequeue(QueType* q, int* item){
  NodeType* tempPtr;
  tempPtr = q->Qfront;
  *item = q->Qfront->key;
  q->Qfront = q->Qfront->next;
  if(q->Qfront == NULL){
    q->Qend = NULL;
    free(tempPtr);
  }
}
void printqueue(QueType* q, int item){

  while(q->Qfront !=NULL){
    printf("key: %d\n",q->Qfront->key);
    // q->Qfront->next;
  }
}
//destroy queue
void DestroyQueue(QueType* q){
  NodeType* tempPtr;
  while(q->Qfront != NULL){
    tempPtr = q->Qfront;
    q->Qfront = q->Qfront->next;
    free(tempPtr);
  }
  free(q);
}
// to check is queue is full
int IsQueueFull(QueType* q){
  return 1;
}
// check queue is empty
int IsQueueEmpty(QueType* q){
  return q->Qfront == NULL;
}





int main(){
  int value =0;
  QueType* queue;
  QueType* q1 = QueType* q2 = NULL;
  printf("enter value; %d\n", value);
  scanf("%d\n",&value);
  queue = CreateQueue();
  while(value <= 7){
    Enqueue(queue,value);
    value++;
    printf("\n Elements in the queue are:\n");
    printqueue(queue,value);
  }

  /* Print all the items */
  while(!IsQueueEmpty(queue)){
    Dequeue(queue,&value);
    printf("%d\n",value);
  }
  DestroyQueue(queue);
  return 0;
}
