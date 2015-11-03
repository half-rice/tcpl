#include <stdio.h>

#define MAXLINE 1000
#define MAXTAB 4

int line_len(char line[], int lim);
void detab(char to[], char from[], int len);


/* Write a program detab that replaces tabs in the input with 
   the proper number of blanks to space to the next tab stop. 
   Assume a fixed set of tab stops, say every n columns. Should 
   n be a variable or a symbolic parameter? */
int main(){
  int c, i, len;
  char line[MAXLINE];
  char detab_line[MAXLINE];

  while((len = line_len(line, MAXLINE)) > 0){
    printf("%s\n", line);
    detab(detab_line, line, len);
  }
  printf("%s", detab_line);

  return 0;
}

int line_len(char line[], int lim){
  int c, i;

  for(i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
    line[i] = c;
  }
  if(c == '\n'){
    line[i] = c;
    ++i;
  }

  line[i] = '\0';
  return i;
}

void detab(char to[], char from[], int len){
  int i, j;
  int to_offset;

  i = 0;
  j = 0;
  to_offset = 0;
  while(i < (len+to_offset)-1){
    if(from[i] == '\t'){
      for(j = 0; j < MAXTAB; ++j){
        to[(i+to_offset)] = '.';
        ++to_offset;
      }
    }
    else{
      printf("to[%d+%d] = from[%d]\n", i, to_offset, from[i]);
      to[i+to_offset] = from[i];
    }
    printf("i: %d, offset: %d\n", i, to_offset);
    ++i;
    printf("%s\n", to);
  }

  printf("to_offset: %d", to_offset);
}