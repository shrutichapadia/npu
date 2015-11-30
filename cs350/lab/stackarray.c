#include <stdio.h>


void push(int);
int pop();
void display();

struct node {
    int key;
    struct node *next;
    struct node *prev;
} top;
int stackcreate ()
{
	int i,n;
	for (i=0; i<n;i++)
	{
		printf("%d", i);
		scanf("%d", &i);
	}
  return 0;
}
void push (int a)
{
    struct node newNode;
    newNode.key = a;
    newNode.prev = NULL;
    newNode.next = &top;
    top = newNode;
    printf("%d number pushed to the stack.\n", top.key);
}

int pop()
{
    if (top.key == '\0')
    {
        printf("Stack is Empty.\n");}
    else {
    printf("%d number popped out from the stack.\n", top.key);
    top = *(top.next);
    top.prev = NULL;
  }
    return(top.key);
}
void display (){
  struct node newNode;
  if( top.key == '\0'){
    printf ( "stack is Empty\n" ) ;
  }
while (top.key != '\0'){
        printf ( "%d ",top.key) ;
        newNode.next = &top;
        top = newNode;

    }
}
reversestring(stack){
  for(i =0; i=stacklength -1;i++){
    while(stack != NULL){
      s2 += stack.top()
      stack.pop()
      return s2;
    }
  }
}

int main()
{
    int option = 0;
    int a;
    //stackcreate();
    while (option != 3)
    {
        printf("\n Enter your options :\n1) Push \n2) Pop \n3) exit\n");
        scanf("%d",&option);
        if (option == 1){
            int num;
            scanf("%d",&num);
            push(num);
        }
        else{
            if (option == 2){
                pop();
            }
            else{
                if (option != 3){
                  printf(" enter wrong number :Error: \n" );
                }
            }
        }
        printf("\n Elements in the stack :\n");
        display();
    }
    return 0;
}
