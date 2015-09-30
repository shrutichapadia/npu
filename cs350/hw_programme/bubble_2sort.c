#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// int search (int chap[], int target);
int main()
{
  int chap[50];
  int i,j;
  int temp =0;
  int num;
  // int index;
  // int target;
  srand(time(NULL));
  //create element for array
  for (i =0; i<50; i++) {
    num = rand() % 1000 +1;
    chap[i] = num;
  }
  //generate bubble sorted  array
  for (i=0; i<50; i++) {

    for (j=0; j< 50-1; j++) {
      if (chap[j] > chap[j+1])
      {
          temp = chap[j];
          chap[j] = chap[j+1];
          chap[j+1] = temp;

      }
    }
  }
  for (i =0; i <50; i++){
    
    printf("%d\n", chap[i] );
  }
  return 0;
}
