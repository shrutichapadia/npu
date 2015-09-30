#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NOT_FOUND -1
int search (int chap[], int target);

int main()
{
  int chap[50];
  int i,j;
  int temp =0;
  int num;
  int index;
  int target;
  srand(time(NULL));
  //create element for array
  for (i =0; i<50; i++) {
    num = rand() % 1000 +1;
    chap[i] = num;
  }
  // generate bubble sorted  array
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
      for (j=0; j<50; j++){

        printf("%d\n", chap[j] );

    }

      // searching random target from sorted array
      index = search(chap, target);
      for (j=0; j<50; j++){

        target = chap[j];
        printf("%d\n enter target number", chap[j] );
        printf("%d%s%d\n", j, " ===> ", chap[j]);
        printf("%d\n",chap[j]);
        if (index != NOT_FOUND){
          printf("%s%d\n", "Target is found at index: ===> ", index);
        } else {
          printf("%s\n","Target is not found :(");
        }
      }
          return 0;

}

int search (int chap[], int target){

  // index postion of first, middle and last
  int first = 0;
  int last = 1000;
  int middle = (first + last) /2;
  int i;

  // if index of first is smaller or equal than index of last perform action
    while (first <= last){

      printf("%s%d\n", "FIRST  : ", first);
      printf("%s%d\n", "MIDDLE : ", middle);
      printf("%s%d\n", "LAST   : ", last);
      printf("%s%d\n", "TARGET : ", target);
      printf("%s\n", "==================================");

      // check value at index of first is same as target or not
      if(chap[first] == target){
        return first;
      }
      // check value at index of last is same as target or not
      if(chap[last] == target){
        return last;
      }

      // if target value is less than value at middle index decress middle index by 1
      // if target value is greater than value at middle index increase middle index by 1
      if(target < chap[middle]){
          last = middle - 1;
      } else if(target > chap[middle]){
          first = middle + 1;
      } else {
          return middle;
      }
      middle = (first + last)/2;
    }
    return -1;
}
