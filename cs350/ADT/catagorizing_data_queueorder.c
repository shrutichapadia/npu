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
  struct node* next;
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
/* concatenates two linked lists */
// void concatqueue ( QueType* q1, QueType* q2)
// {
//     struct node *temp ;
// //if the first queue is empty
// if ( *q1 == NULL )
//         *q1 = *q2 ;
//   else {                        //if both queue are non-empty
//       if ( *q2 != NULL ){
//             temp = *q1 ;  //points to the starting of the first queue
//             while ( temp ->next != NULL )
//                 temp = temp ->next ;
//             temp ->next = *q2 ;  //concatenate the second queue after the first
//         }
//     }
// }
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
// void printqueue(QueType* q, int item){
//
//   while(q->Qfront !=NULL){
//     printf("key: %d\n",q->Qfront->key);
//     q->Qfront->next;
//   }
// }


int main(){
  int value, i;
  int n =10;
  QueType* q1 = NULL;
  QueType* q2 = NULL;
  //QueType* q3 = NULL; QueType* q4 = NULL;
  QueType* queue;
  //queue = CreateQueue();
  int count = 0;

      queue = CreateQueue();
      printf ( "\n Enter elements in the queue : ") ;
      scanf("%d\n",&value);


  //     for(i=0;i<=10;i++){
        while(value != -9999){
        Enqueue(queue,value);
        scanf("%d\n", &value);
        value++;}
        if(i=1;i<10;i++){

        Enqueue(q1,value);
       printf("%d element in the q1", value);
       scanf("%d\n", &value);
        }
        else
        Enqueue(q2,value);


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

  }
