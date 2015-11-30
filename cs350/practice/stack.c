#include <stdio.h>
#include <stdlib.h>

//#define max 19
struct stacktype* createstack();
int isstackfull(struct stacktype* s);
int isstackEmpty(struct stacktype* s);
void push(struct stacktype* s, int newitem);
int pop(struct stacktype* s,int removeitem);

struct NodeType{
  int key;
  struct NodeType* topptr;
  struct NodeType* next;
  struct NodeType* ptr;
  struct stacktype* s;
};


struct stacktype{
  int key;
  struct  NodeType* topptr;
  struct stacktype* s;
  struct NodeType* ptr;

};

struct stacktype* createstack(){
  struct stacktype *s = (struct stacktype*)malloc(sizeof(struct stacktype)*1);
  s->topptr = NULL;
  return s;
};
int isstackfull(struct stacktype* s){
  return 1;
};
int isstackEmpty(struct stacktype* s){
  return s->topptr == NULL;

};
void push(struct stacktype* s, int newitem){
  struct NodeType* ptr = (struct NodeType*)malloc(sizeof(struct NodeType)*1);
  s->ptr->key = newitem;
  ptr->next = s->topptr;
  s->topptr = ptr;

};
int pop(struct stacktype* s,int removeitem){
  struct NodeType* tempptr;
  tempptr = s->topptr;
  removeitem = s->topptr->key;
  s->topptr = s->topptr->next;
  free(tempptr);
  return 1;
};
int main()
{
  int value = 0;
  struct stacktype* stack;
  stack = createstack();
  while(value <=10){
    push(stack,value);
    value++;
    printf("%d\n element after pused",value);
  }
  while(!isstackEmpty(stack)){
   pop(stack,value);
   printf("%d\n", value);
  }

  return 0;
}
