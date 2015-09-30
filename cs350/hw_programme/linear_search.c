// Linear Search
#include <stdio.h>
#include <stdlib.h>

#define NOT_FOUND -1

int search(int chap[], int target);

int main()
{
    int chap[1000];
    int target;
    int index;
    int i;

    // prepare array of 1000 elements with randome number
    for(i=0; i<1000; i++){
      chap[i] = rand() % 999 + 1;
    }

    // print array of random numbers
    for(int j=0; j<1000;j++){
        printf("%d",j);
        printf("%s", "===>");
        printf("%d\n",chap[j]);
    }

    // input target number
    printf("Enter the target number: ");
    scanf("%d", &target);

    // search for target element
    index = search(chap, target);

    // check for valid index or not , if valid print index else not found
    if (index != NOT_FOUND){
      printf("Target is found at index: %d\n",index);
    } else {
      printf("Target is not found.\n");
    }
    return 0;
}

// search target element into array of randome number
int search(int chap[], int target){
  int i;
  for (i = 0; i < 1000; i++){
      if (chap[i] == target){
          return i;
      }
  }
  return -1;
}
