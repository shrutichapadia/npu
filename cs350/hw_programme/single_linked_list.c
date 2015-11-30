
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
node* RetrieveItem(ListType* list, int targetKey)
{
  node* mover = list->listhead;

  while (mover) {
    if (targetKey == mover->key){
   return mover; 
    }
    mover = mover->next;
  }
 return NULL;
 }
void DestroyList(ListType *list)
{
  node* current = list->listhead;
  NodeType* temp;
 while (current){
   temp = current;
   current = current->next;
   free(temp);
 }
  free(list);
}
int findlargest(ListType* list){
  int current = list->key;
  ListType *temp = list;
 while(temp != NULL){
      if(list->key == NULL){
          return current;
        }
        else{
        next = findlargest(list->next);
        }
      if(current >next){
        return current;
      } else {
        return next;
      }
      temp = temp->next;
 }
}

int sorted(ListType* list)
{
	Node * temphead = head;
//	ListNode * tempnode = NULL;

	int counter = 0;
	while (temphead)
	{
		temphead = temphead->next;
		counter++;
	}
	for (int i=0; i<counter; i++)
	{
		for (int j=0; j<counter-i; j++)
		{
			if (temphead->key > temphead->next->key)
			{
				tempnode = temphead;
				temphead = temphead->next;
				temphead->next = tempnode;

			}
		}
	}
}
int DeleteItem(ListType*list, int deleteKey)
 {
      struct nodeType* previous; /* previous node's pointer */
      NodeType* current; /* traveling pointer */

      current = list->listhead;
      previous = NULL;
 /* Find the tagert location */
 while (current)
 {
 if (deleteKey == current->key)
 break;
 previous = current;
 current = current->next;
 }
 if (current == NULL)
 return FALSE; /* Not found */

 if (previous == NULL)
 {
 list->head = current->next; /* Delete first node */
 free(current);
 }
 else
 {
 previous->next = current->next;
 free(current);
 }
 list->count--;
 return TRUE;
 }


int main(){

  int value;
  ListType *alist;
  alist = CreateList();
  while(value != -9999){
    Insertnode(alist,value);
    scanf("%d\n",&value);
  }
    printlist(alist);
    printf("Elements in the unsorted list %d\n", alist.value);

  //retrive value from list
  while (printf("Enter each element, end at '-9999' :");
  scanf("%d\n",&value), value!=-9999);
  {
    R= RetrieveItem(alist,value);
    if (r){
      printf("%d,\n", r->value);
    }
    else
    printf("Key: %d not found\n",key);
  }
  printf("Largest number in the sorted list is:\n", );
  findlargest();



  //  return 0;
}
