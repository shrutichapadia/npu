// binary search

#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1

int search (int chap[], int target);

int main(){
    int chap[1000];
    int target;
    int index;
    int num_elements;
    int i;

    printf("%s", "Enter the target number: ===>");
    scanf("%d", &target);

    // generate sorted elements into array
   for(i=0; i< 1000; i++) {
      chap[i] = i+7;
   }

   // print index ===> value at that index
   for(int j=0;j<1000;j++){
      printf("%d%s%d\n", j, " ===> ", chap[j]);
   }

    // find target value's index in array
    index = search(chap, target);

    // validate index for target value
    if (index != NOT_FOUND){
      printf("%s%d\n", "Target is found at index: ===> ", index);
    } else {
      printf("%s\n","Target is not found :(");
    }
    return 0;
}

// find index of target value
int search (int chap[], int target){

  // index postion of first, middle and last
  int first = 0;
  int last = 1000;
  int middle = (first + last) /2;

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
