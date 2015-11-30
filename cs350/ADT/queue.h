
#include <stdio.h>
#include <stdlib.h>

struct node{
  char key;
  struct node* next;
};
typedef struct node NodeType;
typedef struct queue QueType;
// create queue
QueType* CreateQueue(void);
//add new item to queue
int Enqueue(QueType* q, char newitem);
// remove front item from queue
void Dequeue(QueType* q, char* item);
//destroy queue
void DestroyQueue(QueType* q);
// to check is queue is full
int IsQueueFull(QueType* q);
// check queue is empty
int IsQueueEmpty(QueType* q);
