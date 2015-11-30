#include <stdio.h>
#include "list.h"

struct node{
  int key;
  nodetype* next;
}
list* createlist()
{
    List* newlist = (list*)malloc(sizeof(list)*1);
    newlist->head= NULL:
    newlist->count=0;
    return newlist;
  }
}
int deleteNode(list* alist, int keyvalue){
  node* current = list->head;
  *current = list->head;
  while (current!= NULL || current->key != keyvalue) {
    if (previous == NULL)
  }
}
void print_list(node * head) {
    node * current = head;

    while (current != NULL) {
        printf("%d\n", current->keyvalue);
        current = current->next;
    }
}

int main(){




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
