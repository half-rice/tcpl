#include <stdio.h>

/* Write a program that prints its input one word per line */
main(){
  int c;

  while((c = getchar()) != EOF){
    if(c == '\n' || c == ' ' || c == '\n' || c == '\t'){
      printf("\n");
    }
    else{
      putchar(c);
    }
  }

  return 0;
}