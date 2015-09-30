// structure_nodearray
#include <stdio.h>
#include <stdlib.h>

typedef struct student{
  char key;
  int value;

} Node;

int main()
{
  int key;
  int i;
  int value;
  Node * nodearray;
  nodearray = (Node *)malloc (sizeof (Node)*10);

    nodearray[0].key = 'a';
    nodearray[0].value = 10;
    nodearray[1].key = 'b';
    nodearray[1].value = 20;
    nodearray[2].key = 'c';
    nodearray[2].value = 30;
    nodearray[3].key = 'd';
    nodearray[3].value = 40;
    nodearray[4].key = 'e';
    nodearray[4].value = 50;
    nodearray[5].key = 'f';
    nodearray[5].value = 60;
    nodearray[6].key = 'g';
    nodearray[6].value = 70;
    nodearray[7].key = 'h';
    nodearray[7].value = 80;
    nodearray[8].key = 'i';
    nodearray[8].value = 90;
    nodearray[9].key = 'j';
    nodearray[9].value = 100;

    for (i=0; i<10; i++){

    printf("key: %c & value : %d\n", nodearray[i].key, nodearray[i].value);
    // printf("value: %d\n", nodearray[i].value);

    }
    return 0;
}
