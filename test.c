#include <stdio.h>

int main(){
  int array[10];
  int count;

  count = 0;
  int i;
  for (i=0; i<10; ++i){
    array[i] = 0 + (++count);
    printf("%d\n", array[i]);

  }

  // printf("%d\n", array);

  return 0;
}