#include <stdio.h>

int main(){
  int c, i;
  char cc;
  int alpha[27];

for(i = 0; i < 26; ++i)
  alpha[i] = 0;

/* Write a program to print a histogram of the frequencies of 
   different characters in its input */
  while((c = getchar()) != EOF){
    for(i = 0; i < 26; ++i){
      if(c - 'a' == i){
        alpha[i] += 1;
      }
    }
  }

  for(i = 0; i < 26; ++i){
    printf("%d ", alpha[i]);
  }
  printf("\n");
  for(i = 0; i < 26; ++i){
    char cc = i + 'a';
    printf("%c ", cc);
  }
  printf("\n");

  return 0;
}