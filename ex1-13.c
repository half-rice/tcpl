#include <stdio.h>

#define IN  1
#define OUT 0

/* Write a program to print a histogram of the lengths of words in its 
   input. It is easy to draw the histogram with the bars horizontal; a
   vertical orientation is more challenging */
int main(){
  int i, j, c;
  int max;
  int state;
  int wordlen;
  int wordcount;
  int histogram[20];
  int histogram2[20];

  for(i = 0; i < 20; ++i)
    histogram[i] = 0;

  state = OUT;
  wordlen = 0;
  wordcount = 0;
  while((c = getchar()) != EOF){
    if(c >= 65 && c <= 90 || c >= 97 && c <= 122){
      state = IN;
      ++wordlen;
    }
    else if(c == ' ' || c == '\n' || c == '\t' && wordlen >= 1 && state == IN){
      state = OUT;
      histogram[wordcount] = wordlen;
      ++wordcount;
      wordlen = 0;
    }
    else{
      state = OUT;
    }
  }

  /* vertical histogram */
  /* copy array for manipulation and set max word length */
  max = 0;
  for(i = 0; i < 20; ++i){
    histogram2[i] = histogram[i]; 
    if(histogram[i] > max){
      max = histogram[i];
    }
  }

  for(i = 0; i < 20; ++i){
    if(histogram2[i] = max){
      printf("| ");
    }
    else if(histogram2[i] < max){
      printf("  ");
    }
    else{
      printf("in mordor");
    }
  }



  /*
  /* horizontal histogram */
  for(i = 0; i < 20; ++i){
    if(histogram[i] > 0){
      printf("%d ", histogram[i]);
      for(j = 0; j < histogram[i]; ++j){
        printf("-");
      }
      printf("\n");
    }
  }
  */

  printf("\n");

  return 0;
}