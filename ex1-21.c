#include <stdio.h>

#define MAXLINE 1000
#define MAXTAB 4

int line_len(char line[], int lim);
void entab(char to[], char from[], int len);


/* Write a program entab that replaces strings of blanks by the 
   minimum number of tabs and blanks to achieve the same spacing. 
   Use the same tab stops as for detab. When either a tab or a 
   single blank would suffice to reach a tab stop, which should 
   be given preference? */
int main(){
  int c, i, len;
  char line[MAXLINE];
  char entab_line[MAXLINE];

  while((len = line_len(line, MAXLINE)) > 0){
    printf("%s\n", line);
    entab(entab_line, line, len);
  }
  printf("%s", entab_line);

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

void entab(char to[], char from[], int len){
  int i;

  // printf("--------\n%s\n", from);

  i = 0;
  while(i < len){

  }

  printf("original line: %s\nentabbed line: %s\n", from, to);
}