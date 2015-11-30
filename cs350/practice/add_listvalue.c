#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int key;
  struct node *next;

}Node;

typedef struct list{
  int count; int key;
  struct node *listhead;
}ListType;
// Create List
ListType*CreateList(){
  ListType *list;
  list = (ListType*)malloc(sizeof(ListType)*10);
  list -> count = 0;
  list -> listhead = NULL;
  return list;

}
void Insertnode(ListType*list,int key){
  struct node *current;
  current = (Node*)malloc(sizeof(Node)*10);
  current ->key = key;
  current ->next = list->listhead;
  list ->listhead = current;
  list -> count++;
}
void printlist(ListType *list){
  struct node *current = list->listhead;
  while(current){
    printf("Key: %d\n", current->key);
        current = current->next;
  }
}


int addListsitem ()
{
struct node* list1; struct node* list2;
int add1=0, add2=0, final=0;
while (list1->next != NULL && list2->next!= NULL)
{
add1 = add1*10 + list1->key;
add2 = add2*10 + list2 -> key;
if(list1->next != NULL) list1 = list1->next;
else final += add1;
if(list2->next != NULL) list2 = list2->next;
else final += add2;
}

return final;
}
int main()
{
  int value = 0;
  ListType* list1;
  ListType* list2;
  // node* list;
  printf("list name");
  list1 = CreateList();
  list2 = CreateList();
  while(value != -9999){
    Insertnode(list1,value);
    scanf("%d\n",&value);
  }
    printlist(list1);
    printf("Elements in the list1 %d\n",value);

  while(value != 0){
    Insertnode(list2,value);
    scanf("%d\n",&value);
  }
  printlist(list2);
  printf("Elements in the list1 %d\n", value);

// print sum of arbitrarily large values
  printf("Sum of arbitrarily large number in list is:\n");
  addListsitem();
   return 0;
}
