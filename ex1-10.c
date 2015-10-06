#include <stdio.h>

/* Write a program to copy its input to its output, replacing each
   tab by \t, each backspace by \b, and each backslash by \\. This makes
   tabs and backspaces visible in an unambiguous way */
main(){
  int c;

  while((c = getchar()) != EOF){
    if(c == 9){
      printf("\\t");
    }
    else if(c == 8){
      printf("\\b");
    }
    else if(c == 92){
      printf("\\\\");
    }
    else{
      putchar(c);
    }
  }

  return 0;
}