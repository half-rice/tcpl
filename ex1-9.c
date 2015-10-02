#include <stdio.h>

/* Write a program to copy its input to its output, replacing each 
   string of one or more blanks by a single blank */
main(){
  int c, b;

  b = 0;
  while((c = getchar()) != EOF){
    if(c == ' ' && b == 1){
      b = 0;
      continue;
    }
    else if(c == ' ' && b == 0){
      b = 1;
      putchar(c);
    }
    else{
      putchar(c);
    }
  }

  return 0;
}