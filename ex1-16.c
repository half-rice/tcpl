#include <stdio.h>

#define MAXLINE 1000      /* maximum input line size */

int lineLen(char line[], int lim);
void copy(char to[], char from[]);

/* Revise the main routine of the longest-line program so it will correctly 
print the length of arbitrarily long input lines, and as much as possible 
of the text */
int main(){
  int len;                  /* current line length */
  int max;                  /* maximum length seen so far */
  char line[MAXLINE];       /* current input line */
  char longest[MAXLINE];    /* longest line saved */

  max = 0;

  while((len = lineLen(line, MAXLINE)) > 0)
    if(len > max){ 
      max = len;
      copy(longest, line);
    }
  if(max > 0){
    printf("\n\nThe longest line was:\n%s", longest);
  }

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
  
  line[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to' */
void copy(char to[], char from[]){
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}