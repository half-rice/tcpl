#include <stdio.h>

#define MAXLINE 1000

int lineLen(char line[], int lim);
void saveLine(char line[], int len);
  
char lines[10000];        /* saved lines */
int lines_counter;

/* Write a program to print all input lines that are longer than 80 
   characters */
int main(){
  int len;                  /* current line length */
  int max;                  /* maximum length seen so far */
  char line[MAXLINE];       /* current input line */
  extern char lines[];
  extern int lines_counter;

  lines_counter = 0;

  while((len = lineLen(line, MAXLINE)) > 0)
    if(len > 80){ 
      saveLine(line, len);
    }

  printf("\n\nEvery line over 80 chars:\n%s\n\n", lines);

  return 0;
}

/* lineLen: read a line into line[], return length */
int lineLen(char line[], int lim){
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

void saveLine(char line[], int len){
  int i;

  extern char lines[];
  extern int lines_counter;

  i = 0;
  while((lines[lines_counter] = line[i]) != '\t' && i <= len){
    ++lines_counter;
    ++i;
  }


}