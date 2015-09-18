#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));

  int dice;
  dice = rand();

  int count = 0;

  int loop;
  while(loop = 1){
    if(count < 9){
      if(count = 8){
        printf("n");
      }
      if(count = 1){
        printf("x");
      }
      dice = rand();
      printf("%d", dice);
    }
    else{
      count = 0;
      dice = rand();
      printf("%d\n", dice);
    }
  }

  return 0;
}