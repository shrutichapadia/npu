// structure_nodetype
#include <stdio.h>
#include <stdlib.h>
//strucure type
typedef struct nodetype{
  int key;
  char name [50];
  struct nodetype *next;


} NODETYPE;

int main()
{
  int key;
  char name [50];
  // struct nodetype key = 6;
  // struct nodetype name = 'shruti';
  struct nodetype *ptrNode;

  ptrNode = (NODETYPE*)malloc(sizeof (struct nodetype));


    printf("key: %d & name : %c\n", nodetype.key,nodetype.name);
    // printf("value: %d\n", nodearray[i].value);

    return 0;
}
