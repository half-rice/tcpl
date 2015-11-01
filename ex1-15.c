#include <stdio.h>

float convertCelsius(float f);

/* Rewrite the temperature conversion program of Section 1.2 to 
   use a function for conversion. */
main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;        /* lower limit of temp table */
  upper = 300;      /* upper limit */
  step = 20;        /* step size */

  fahr = lower;
  while(fahr <= upper){
    /* celsius = (5.0/9.0) * (fahr-32.0); */
    printf("%3.0fF %6.1fC\n", fahr, convertCelsius(fahr));
    fahr = fahr + step;
  }
}

float convertCelsius(float f){
  return (5.0/9.0) * (f-32.0);
}