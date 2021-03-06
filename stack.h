
#ifndef stack_h
#define stack_h
#include "node.h"

typedef struct {
	NodePtr top;
	int size;
}Stack;

typedef Stack* StackPtr;

void push(StackPtr s, char value)
{

  NodePtr new_node = (NodePtr)malloc(sizeof(Node));
  new_node->data = value;
  new_node->nextPtr = NULL;
  
  new_node->nextPtr = s->top;
  s->top = new_node;
  s->size++;

  
}

char pop(StackPtr s)
{

  char res;
    NodePtr temp;

    temp = s->top;
    s->top = s->top->nextPtr;
    res = temp->data;

    free(temp);
    temp = NULL;
    s->size--;
    return res;
}
void pop_all(StackPtr s){
  NodePtr ptr = NULL;
  ptr = s->top;
  while(ptr != NULL){
    s->top = s->top->nextPtr;
    free(ptr);
    ptr = s->top;
    s->size--;
 }
}
#endif
