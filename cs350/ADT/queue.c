#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
//implementation file for queue ADT

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
 int Enqueue(QueType* q, char newitem){
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

}
// remove front item from queue
void Dequeue(QueType* q, char item){
  NodeType* tempPtr;
  tempPtr = q->Qfront;
  item = q->Qfront->key;
  q->Qfront = q->Qfront->next;
  if(q->Qfront == NULL){
    q->Qend = NULL;
    free(tempPtr);
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

// returns number of entries and displays the elements in queue
// void queue_size()
// {
//     struct node *temp;
//
//     temp = front;
//     int cnt = 0;
//     if (front  ==  NULL)
//     {
//         printf(" queue empty \n");
//     }
//     while (temp)
//     {
//         printf("%d  ", temp->data);
//         temp = temp->link;
//         cnt++;
//     }
//     printf("********* size of queue is %d ******** \n", cnt);
// }
