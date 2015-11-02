#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];
char reverse[MAXLINE];

int line_len(void);
void rev(char original[], char reverse[], int length);

/* Write a function reverse (s} that reverses the character string s. 
   Use it to write a program that reverses its input a line at a time */
int main(){
  int c, i;
  int len;
  extern char line[], reverse[];

  while((len = line_len()) > 0){
    rev(line, reverse, len);
  }

  return 0;
}

/* line_len: read a line into line[], return length */
int line_len(void){
  int c, i;
  extern char line[];

  for(i = 0; i < MAXLINE-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if(c == '\n'){
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void rev(char og[], char rv[], int len){
  int i;

  i = 0;
  while((rv[i] = og[(len-2)-i]) != '\0' && (len-2)-i <= 0){
    ++i;
    printf("\nog:\n%s\nrv:\n%s\n", og, rv);
  }
}