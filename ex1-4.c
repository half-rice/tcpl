#include <stdio.h>

float convertFahr(float c);

main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius | Fahr\n");

  celsius = lower;
  while(celsius <= upper){
    printf("%6.1fC | %3.0fF\n", celsius, convertFahr(celsius));
    celsius += step;
  }

  return 0;
}

float convertFahr(float c){
  return c * (9.0/5.0) + 32;
}
