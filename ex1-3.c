#include <stdio.h>

float convertCelsius(float f);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating point version */
main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temp table */
  upper = 300;      /* upper limit */
  step = 20;        /* step size */

  /* header */
  printf("Fahr | Celsius\n");

  fahr = lower;
  while(fahr <= upper){
    /* celsius = (5.0/9.0) * (fahr-32.0); */
    printf("%3.0fF | %6.1fC\n", fahr, convertCelsius(fahr));
    fahr = fahr + step;
  }

  return 0;
}

float convertCelsius(float f){
  return (5.0/9.0) * (f-32.0);
}