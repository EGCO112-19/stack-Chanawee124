#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

int main(int argc, char **argv){
  printf("Checking the parentheses in argv arguments\n");
  int i,N,j,n;
  n = 0;
  
  Stack s;
  s.size = 0;
  s.top = NULL;
  
  for(i=1;i<argc;i++){   
     for(j=0;j<strlen(argv[i]);j++){
      switch(argv[i][j]){
        case '[' :
        case '{' :  push(&s,argv[i][j]); break;
        case ']' :  if(pop(&s) != '[') n=1; break;
        case '}' :  if(pop(&s) != '{') n=1; break;
      }
      if(n == 1) break;
      }
      if(n == 1 || s.size > 0)
      printf("The parentheses do not match for %s\n",argv[i]);
      else
      printf("The parentheses match successfully for %s\n",argv[i]);
      n=0;
      if(s.size > 0)
        pop_all(&s);
  }
    return 0;
}
