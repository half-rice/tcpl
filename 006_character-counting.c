#include <stdio.h>

/* count characters in input */

main(){
  double nc;

  for(nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}

/*
main(){
  long nc;

  nc = 0;
  while(getchar() != EOF)
    ++nc;
  printf("%ld\n", nc);
}
*/