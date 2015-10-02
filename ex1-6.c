#include <stdio.h>

/* Verify that the expression  getchar  ( ) I=  EOF  is  0 or  1 */
main(){
  int c;

  while((c = getchar()) != EOF){
    if(c == 10){
      break;
    }
    else{
    printf("%d != EOF (%d)\n", c, (c != EOF));
    }
  }
  printf("\n");

  return 0;
}