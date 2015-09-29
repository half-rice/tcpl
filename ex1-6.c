#include <stdio.h>

/* copy input to output */
main(){
  int c;

  while((c = getchar()) != EOF){
    if(c == 10){
      printf("inside if");
      break;
    }
    else{
    printf("%d != EOF (%d)\n", c, (c != EOF));
    /* putchar(c); */
    }
  }
  printf("\n");

  return 0;
}