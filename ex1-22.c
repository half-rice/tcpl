#include <stdio.h>

#define MAXSTRING 1000
#define MAXLINE 100

int line_len(char string[], int lim);

/* Write a program to "fold" long input lines into two or more shorter lines after 
the last non-blank character that occurs before the n-th column of input. Make 
sure your program does something intelligent with very long lines, and if there 
are no blanks or tabs before the specified column */
int main(){
  int len;
  char string[MAXSTRING];
  char word[MAXLINE];

  while((len = string_len(string, MAXSTRING)) > 0){
    printf("%s\n")

  }

  return 0;
}

int string_len(char string[], int lim){
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