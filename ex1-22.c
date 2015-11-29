#include <stdio.h>

#define MAXSTRING 1000
#define MAXLINE 100

int line_len(char line[], int lim);

/* Write a program to "fold" long input lines into two or more shorter lines after 
the last non-blank character that occurs before the n-th column of input. Make 
sure your program does something intelligent with very long lines, and if there 
are no blanks or tabs before the specified column */
int main(){
  int len;
  char line[MAXSTRING];
  char word[MAXLINE];
  
  while((len = line_len(line, MAXSTRING)) > 0){

  }

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