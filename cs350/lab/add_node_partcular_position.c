#include <stdio.h>
#include <stdlib.h>
//create node
typedef struct node {
  int key;
  struct node *next;
}Node;
// create list and count nodes in the list
typedef struct list{
  struct Node * head;
  int count;
}List;

List* createlist (List* newlist,int head){

  newlist = (List*)malloc(sizeof(List)*1);
  newlist->head= NULL;
  newlist->count=0;
  return newlist;
};
// // add new node inbetween list at particular position
//
int insertnode_middle(){

    int pos,i;
    struct node;
    struct *current;
    struct *nextnode;
    struct newlist;
    struct *node = newnode;
    newnode=(node*)malloc(sizeof(node)*1);

    while(current->next !=NULL){
             for(i=1;i< pos-1;i++)
             {
             current = current->next;
             }
       nextnode=current->next;
       current->next = newnode;
       newnode->next=nextnode;
       list *newlist->count++;

     }
     return 0;
}

int main()
{
  int key;
  int pos;
  struct node *ptrNode;
  struct list;
  struct nodetype;
  struct newnode;

  // enter key for list
  printf("%s\n","Enter a key ");
  scanf("%d\n keyvalue in list", list.key);
  // enter value for new node
  printf("Enter the values : ");
  scanf("%d",newnode.key);

  if(newnode->next == NULL){

  printf("Enter the position : ");
  scanf("%d",&pos);
  }
  if(current == NULL && pos >0){
    printf("\n you can insert value at 1st position - empty list");
    scanf("%d\n", current.key,current.pos);
  }
  else
    ptrNode = (node*)malloc(sizeof (node)*1);

    printf("key: %d & position: %d\n",node.key,node.pos);
    printf("%s\n",node->ptrNode);


    return 0;
  }
}
