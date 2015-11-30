// create linked list - Donation

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int amount;
  struct node *next;

}Node;

typedef struct list{
  int count;
  struct node *firstnode;
}ListType;
// Create List
ListType*CreateList(){
  ListType *list;
  list = (ListType*)malloc(sizeof(ListType)*10);
  list -> count = 0;
  list -> firstnode = NULL;
  return list;

}
void Insertnode(ListType*list,int amount){
  struct node *current;
  current = (Node*)malloc(sizeof(Node)*10);
  current ->amount = amount;
  current ->next = list->firstnode;
  list ->firstnode = current;
  list -> count++;
}
void printlist(ListType *list){
  struct node *ptr;
  ptr = list -> firstnode;
  while (ptr!= NULL){
    printf("%d",ptr->amount);
    ptr = ptr->next;
  }
}

int main(){

  // create a linked list , cout = 0, listhead = null, then keep add donation till its reacch -9999
  int value;
  ListType *list;
  list = CreateList();
  printf("Enter each element, end at '-9999' :");
  scanf("%d\n",&value);
  while(value != -9999){
    Insertnode(list,value);
    scanf("%d\n",&value);
  }
    printlist(list);
    printf("Total Donations received %d\n", list->count);

  //  return 0;
}
