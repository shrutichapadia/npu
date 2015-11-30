

//struct stack
struct stack{
  node* stacktop;
}Stack;
// create stack
stacktype* createstack(void){
  stacktype* s = (stacktype*)malloc(sizeof(stacktype)*1);
  s-> stacktop = null;
  return s;
}
// to count total number of nodes in stack
struct stackcount{
  node* stacktop;
  stack count;

} Stackcount;

//push node
void push(stacktype* s, char newitem){
  node* ptr = (node*)malloc(sizeof(node)*1);
  ptr->key = newitem;
  ptr->next = s->stacktop;
  s->stacktop = ptr;

}
void pop(stacktype* s, char removeitem){
  node*temp;
  temp = s->stacktop;
  *removeitem = s->stacktop->key;
  s->stacktop = s->stacktop->next;

  free (temp);

}
//destroy stack
void destroystack(stacktype* s){
  node* temp;
  while(s->stacktop !=null){
    temp = s->stacktop;
    s->stacktop = s->stacktop->next;
    free(temp);
  }
  free(s);
}
// move stack
void movestack(stacktype* s){
  node* temp;
  while(s->stacktop != null){
    temp = s->stacktop->key;
    s->stacktop = s->stacktop->next;
    moves(temp);
  }
  while(temp != null){
    node* newstack;
    newstack = temp->stacktop;
    *movetonewstack = temp->stacktop->key;
    temp->stacktop = temp->stacktop->next;

  }
} Movestack;
