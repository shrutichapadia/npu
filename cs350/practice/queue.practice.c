#include <stdio.h>
#include <stdlib.h>
#define size
// #include "queue.h"

typedef struct node NodeType;
typedef struct queue QueType;
QueType* CreateQueue();
void Enqueue(QueType* q,int newitem);
void display (QueType* q,int key);
void Dequeue(QueType* q, int* item);

struct node{
  int key;
  struct node* next;
};

//structure of queue
struct queue{
  int key; int capacity;
  struct unode* next;
  NodeType* Qfront;
  NodeType* Qend;
};
// create queue
QueType* CreateQueue(){
  QueType* q = (QueType*)malloc(sizeof(QueType)*15);
  q->Qfront = NULL;
  q->Qend = NULL;
  int count =0;
  q->capacity = 5;
  return q;
}
//add new item to queue
 void Enqueue(QueType*q,int newitem){
  NodeType* newNode;
  newNode = (NodeType*)malloc(sizeof(NodeType)*15);
  newNode->key = newitem;
  newNode->next = NULL;
  if(q->Qend == NULL){
    q->Qfront = newNode;
  }
  else
    q->Qend->next = newNode;
    q->Qend = newNode;
}

// // displays the contents of the queue
void display (QueType* q, int key){
  if(q == NULL){
    printf ( "Queue is Empty\n" ) ;
  }
while (q!= NULL){
        printf ( "%d ", q->Qfront->key) ;
        // q = q->next ;
    }
}

void Dequeue(QueType* q, int* item){
  struct node* tempPtr;
  tempPtr = q->Qfront;
  *item = q->Qfront->key;
  q->Qfront = q->Qfront->next;
  if(q->Qfront == NULL){
    q->Qend = NULL;
    free(tempPtr);
  }
}


int main(){
  int value, i;
  QueType* q1 = NULL;
  //QueType* q2 = NULL;QueType* q3 = NULL; QueType* q4 = NULL;
  QueType* queue;
  //queue = CreateQueue();
  int count = 0;

      CreateQueue();
      printf ( "\n Enter elements in the queue : ") ;
      scanf("%d\n",&value);
    //  display(queue,value);
      Enqueue(queue,value);
             //value++;
      printf("element in the queue");
             count++;
       display(queue,value);

}

  //     for(i=0;i<=10;i++){
  //
  //       Enqueue(queue,value);
  //       value++;
  //       printf("%d element in the queue", value);
  //       count++;
  //       while (value <=10) {
  //   // if(i==0;i<=size;i++)
  //     Dequeue(queue,&value);
  //     Enqueue(q1,value);
  //     count++;
  //   }
  // }
  //
  //       display(q1,value);
    //   }
    //     else if(i==0;i>10<=20; i++){
    //       Dequeue(queue,&value);
    //       Enqueue(q2,value);
    //       display(q2,value);
    //     }
    //     else if(i==0;i>20 <=30; i++){
    //       Dequeue(queue, &value);
    //       Enqueue(q3,value);
    //       display(q3,value);
    //     }
    //     else(i==0;i>30; i++)
    //     Dequeue(queue,&value);
    //     Enqueue(q4,value);
    //     display(q4,value);
    //
    //   // the result obtained after concatenation of all queue
    //
    //   concatqueue( &q1, &q2 );
    //   concatqueue(&q3,&q4);
    //
    //   printf ( "\n\nConcatenated Queue : " ) ;
      // display (queue,value) ;

//  }
