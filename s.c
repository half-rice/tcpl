#include <stdio.h>
#include <limits.h>

int max(int array[], int n){
  int ret = 0;

  int i;
  for(i = 0; i < n; i++){
    if(array[i] > ret){
      ret = array[i];
    }
  }

  return ret;
}


int main(){
  int array[10] = {1,2,3,4,5,6,7,8,9,10};

  printf("max elem: %d\n", max(array, 10));

  return 0;
}