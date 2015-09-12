#include <stdio.h>

/* copy input to output */
main(){
  int c;

  c = getchar();
  while(c != EOF){
    /* wtf */
    putchar(c);
    c = getchar();
  }
}