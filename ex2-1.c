#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

int getbinary(long n, int pos);
int pow2(int n, int p);

main(){
  int a[256];
  long n;
  int i;

/*
  printf("Enter n: ");
  scanf("%d\n", &n);
*/

  n = 777777;
  for (i = 0; i < 64; ++i){
    a[i] = getbinary(n, i);
    printf("%d", a[i]);
    /* printf("%d", getbinary(n, i)); */
  }

  printf("\n\n");
  return 0;
}

getbinary(long n, int pos){
  return (n >> pos) & 1; 
}


pow2(int n, int p)
{
  return n << p;
}