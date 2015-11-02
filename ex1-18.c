#include <stdio.h>

#define MAXLINE 1000        /* maximum input line size */

int line_len(char line[], int lim);
void save_line(char line[], int len);
int trim_line(char line[], int len);
  
char lines[10000];          /* saved lines */
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
    save_line(line, (len-trim_line(line, len)));
  }

  printf("lines = \n%s\n", lines);

  return 0;
}

/* trim_line: read a line into line[], return amount to trim */
int trim_line(char line[], int len){
  int i;
  int del_count;
  int done_trim;

  i = len-1;
  del_count = 0;
  done_trim = 0;

  while(done_trim != 1){
    if(line[i] == '\n'){
      done_trim = 0;
    }
    else if(line[i] == '\0'){
      printf("\nseein zeros\n");
    }
    else if(line[i] == ' ' || line[i] == '\t'){
      printf("\nline[i] %c == ' ' or '\t', ++del_count", line[i]);
      ++del_count;
    }
    else if((line[i] != ' ' || line[i] != '\t' || line[i] != '\0') && i >= 0){
      line[i+1] = '\n';
      done_trim = 1;
    }
    --i;
  }

  return del_count;
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

/* save_line: read a line into line[], append indexes of line[]
   into lines[] */
void save_line(char line[], int len){
  int i;
  extern char lines[];
  extern int lines_counter;

  i = 0;

  while((lines[lines_counter] = line[i]) != '\0' && i < len){
    ++lines_counter;
    ++i;
  }
  printf("saving line[] into lines[]...\n");
  printf("lines[]:\n%s\n", lines);
}