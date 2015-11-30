#include <stdio.h>
#include <stdlib.h>

void push(int);
int pop();
int Stackfull();
int Stackempty();
void display();
#define size 10
struct stack {
   int stack[size];
   int top;
} Stack;

void push(int item) {
   Stack.top++;
   Stack.stack[Stack.top] = item;
}
int pop() {
   int item;
   item = Stack.stack[Stack.top];
   Stack.top--;
   return (item);
 }
void display() {
      int i;
      if (Stackempty())
         printf("\nStack Is Empty!");
      else {
         for (i = Stack.top; i >= 0; i--)
            printf("%d\n", Stack.stack[i]);
      }
}
int Stackfull() {
   if (Stack.top >= size - 1)
      return 1;
   else
      return 0;
}
int Stackempty() {
   if (Stack.top == -1)
      return 1;
   else
      return 0;
}

int main()
{
   int item;
   int option=0;
   Stack.top = -1;
   struct Stack* s;

   printf("\n\t Create  Stack");

  while(option !=3)
 {
   printf("\n\n Enter your option:\n1) Push number\n2) Pop integer\n3) exit.\n");
   scanf("%d",&option);


    if(option ==1) {

         printf("\nEnter The item to be pushed\n");
         scanf("%d", &item);
         if (Stackfull()){
            printf("\nStack is Full!Overflow");}
         else {
            push(item);
          }

        }
        //display();

    else {
            if (option == 2)
         {
            if (Stackempty()){
            printf("\nEmpty stack!Underflow !!");}
            else {
            item = pop();
            printf("\nThe popped element is %d", item); }
         }
         else
         {
         if (option !=3){

                    printf("there is some error");
        }
      }
    }
    printf("\nElements in the stack :\n");
    display();
 }
 //display();
return 0;
}
