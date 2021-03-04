#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"

int main(int argc, char *argv[]){
  printf("Checking the parentheses in argv arguments\n");
  int i,N,j,x;
  
  for(i=1;i<argc;i++){
    //for(j=0;j<strlen(argv[i]);j++){
      if (areBracketsBalanced(argv[i]))
        printf("The parentheses match successfully for %s \n",argv[i]);
      else
        printf("The parentheses do not match for %s \n",argv[i]);
        pop_all(ll);
      //}
  }
  
return 0;
}