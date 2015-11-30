#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int palindrome(char * string,int leftind, int rightind){

  if(string == NULL|| leftind <0 || rightind < 0){
    printf("no input in the string");
    return 0;
  }
  else if(leftind >= rightind){
    return 1;
  }
  else if(string[leftind] == string[rightind]){
    return palindrome(string,leftind+1,rightind-1);
  }
  return 0;
}

int main()
{
    char string[100];
    int leftindex, rightindex;

    printf("Enter string to check, string is palindrome or not: ");
    scanf("%s", string);

    if (palindrome(string,leftindex+1,rightindex-1)){

        printf("%s  string is a Palindrome \n", string);
      }
    else
        printf("%s string is not a palindrome \n", string);

      return 0;
}
