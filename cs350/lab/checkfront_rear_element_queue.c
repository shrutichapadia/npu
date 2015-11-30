#include <stdio.h>
#include <stdlib.h>

typedef struct node NodeType;
typedef struct queue QueType;
QueType* CreateQueue();
int Enqueue(QueType* q,int newitem);
void display (QueType* q,int key);
void Dequeue(QueType* q, int* item);

struct node{
  int key;
  struct node* next;
};

//structure of queue
struct queue{
  int key; int capacity;
  struct node* next;
  NodeType* Qfront;
  NodeType* Qend;
};
// create queue
QueType* CreateQueue(){
  QueType* q = (QueType*)malloc(sizeof(QueType)*5);
  q->Qfront = NULL;
  q->Qend = NULL;
  int count =0;
  q->capacity = 5;
  return q;
}
//add new item to queue
 int Enqueue(QueType*q,int newitem){
  NodeType* newNode;
  newNode = (NodeType*)malloc(sizeof(NodeType)*5);
  newNode->key = newitem;
  newNode->next = NULL;
  if(q->Qend == NULL){
    q->Qfront = newNode;
  }
  else
    q->Qend->next = newNode;
    q->Qend = newNode;
    return 0;
};

// // displays the contents of the queue
void display (QueType* q, int key){
  if(q == NULL){
    printf ( "Queue is Empty\n" ) ;
  }
while (q!= NULL){
        printf ( "%d ", q->Qfront->key) ;
         Qfront = q->Qfront->next ;
    }
}
// to check is queue is full
int IsQueueFull(QueType* q){
  return 1;
}
// check queue is empty
int IsQueueEmpty(QueType* q){
  return q->Qfront == NULL;
}
int front(QueType* q){
  if (q==NULL){
    printf("Queue is Empty");
    exit(0);
  }
  return q->Qfront->key;
}

// // remove front item from queue
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

int main(){
  int value;
  QueType* queue;
  QueType* q1 = NULL;


      queue = CreateQueue();
      printf("enter element to enter in queue:%d\n", value);
      scanf("%d\n",&value);
      while(value <=10){
      Enqueue(q1,value);
      display(queue,value);
      printf("front element is %d\n", front(q1));
    }
      // while(value != -9999)
      // {
      // Enqueue(queue,value);
      //
      // }
      // display(queue,value);
      //
      // return 0;
}
