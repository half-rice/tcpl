
#include <stdio.h>

#define MAXLINE 1000      /* maximum input line size */

int lineLen(char line[], int lim);
void saveLine(char line[], int len);
int trim_line(char line[], int len);
  
char lines[10000];        /* saved lines */
int lines_counter;

/* Write a program to remove trailing blanks and tabs from each 
   line of input, and to delete entirely blank lines. */
int main(){
  int c;
  int len;                  /* current line length */
  int max;                  /* maximum length seen so far */
  char line[MAXLINE];       /* current input line */
  extern char lines[];
  extern int lines_counter;

  lines_counter = 0;

  while((len = line_len(line, MAXLINE)) > 0){
    trim_line(line, len);
    save_line(line, len);
  }

  printf("lines = \n%s\n", lines);

  return 0;
}

int trim_line(char line[], int len){
  int i;
  int done_trim;

  done_trim = 0;

  for(i = len; i > 0; --i){
    if(line[i] == '\n'){
      done_trim = 0;
    }
    else if(line[i] == ' ' || line[i] == '\t' && done_trim != 1){

    }
  }

  return i;
}

/* line_len: read a line into line[], return length */
int line_len(char line[], int lim){
  int c, i;

  for(i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if(c == '\n'){
    line[i] = c;
    ++i;
  }
  
  line[i] = '\t';
  return i;
}

void save_line(char line[], int len){
  int i;

  extern char lines[];
  extern int lines_counter;

  i = 0;
  while((lines[lines_counter] = line[i]) != '\0' && i <= len){
    ++lines_counter;
    ++i;
  }
}