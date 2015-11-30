#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//struct stack
struct stacktype{
  // int node* stacktop;
  int key;
  int stacktop;
  struct stacktype* next;
}Stacktype;
//create stack
struct stacktype* createstack(){
  struct stacktype* s;
  char stacktop;
  s = (Stacktype*) malloc (sizeof(Stacktype)*1);
  s -> stacktop == NULL;
  return s;
};
// // to count total number of nodes in stack
struct stackcount{

  struct Stacktype* stacktop;
  int stackcount;

 }Stackcount;
//
int IsStackEmpty(Stacktype* s)
{
 return s->stacktop == NULL;
}
//push node
push(struct stacktype* s, char newitem){
  int next, ptr;
  struct stacktype* s;
  s = (Stacktype*)malloc(sizeof(Stacktype)*1);
  s->key = newitem;
  s->next = s->stacktop;
  s->stacktop = ptr;

}
char pop(struct stacktype* s, char removeitem){
  stacktype* temp;
  temp = s->stacktop;
  *removeitem = s->stacktop->key;
  s->stacktop = s->stacktop->next;

  free (temp);

}


int main()
{
    char str[100];
    int i, count = 0, length;

    printf("Enter string to check, string is palindrome or not: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        push(str[i]);
    }

    for (i = 0; i < length; i++)
    {
        if (str[i] == pop())
            count++;
    }

    if (count == length)
        printf("%s  string is a Palindrome \n", str);
    else
        printf("%s string is not a palindrome \n", str);
}
