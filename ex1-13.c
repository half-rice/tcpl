#include <stdio.h>

#define IN  1
#define OUT 0

/* Write a program to print a histogram of the lengths of words in its 
   input. It is easy to draw the histogram with the bars horizontal; a
   vertical orientation is more challenging */
int main(){
  int c, len, state;
  int wordcount;
  int wordlen[20];

  int i;
  for(int i = 0; i < 20; ++i)
    wordlen[i] = 0;

  state = OUT;
  wordcount = 0;
  while((c = getchar()) != EOF){
    if(c >= 65 || c <= 90 || c >= 97 || c <= 122 && state == OUT){
      state = IN;
      ++len;
    }
    else if(c == ' ' || c == '\n' || c == '\t'){
      state = OUT;
    }
  }

  return 0;
}