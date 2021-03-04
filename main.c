#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

int main(int argc, char **argv){
  printf("Checking the parentheses in argv arguments\n");
  int i,N,j;
  
  Stack s;

  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
      if (argv[i] == '{' || argv[i] == '(' || argv[i] == '[')
            push(&s, argv[i]);
      if (argv[i] == '}' || argv[i] == ')'
            || argv[i] == ']') {

            if (pop(&s) == '(' && argv[i] == ')')
                N = 1;
            else if (pop(&s) == '{' && argv[i] == '}')
                N = 1;
            else if (pop(&s) == '[' && argv[i] == ']')
                N = 1;
      }
     }
  }
  if (s == NULL)
        printf("Balanced \n");
    else
        printf("Not Balanced \n");
    return 0;

}
