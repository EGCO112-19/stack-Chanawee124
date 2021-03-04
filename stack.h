
#ifndef stack_h
#define stack_h
#include "node.h"

typedef struct {
	NodePtr top;
	int size;
  char data;
}Stack;

typedef Stack * StackPtr;

void push(StackPtr *s, char value)
{
  StackPtr new_node = (StackPtr)malloc(sizeof(Stack));
  new_node->data = value;
  new_node->top = (*s);
  (*s) = new_node;
}

char pop(StackPtr *s)
{
  char res;
    StackPtr top;

    top = *s;
    res = top->data;
    *s = top->top;
    free(top);
    return res;
}
void pop_all(StackPtr s);
#endif
