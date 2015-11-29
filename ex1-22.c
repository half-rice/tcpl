#include <stdio.h>

#define MAXSTRING 1000
#define MAXLINE 7

int string_len(char string[], int lim);
void fold(char to[], char from[], int len);

/* Write a program to "fold" long input lines into two or more shorter lines after 
the last non-blank character that occurs before the n-th column of input. Make 
sure your program does something intelligent with very long lines, and if there 
are no blanks or tabs before the specified column */
int main(){
  int len;
  char string[MAXSTRING];
  char fold_string[MAXSTRING];
  char word[MAXLINE];

  while((len = string_len(string, MAXSTRING)) > 0){
    printf("%s\n", string);
    fold(fold_string, string, len);
    /*if(len > MAXLINE){
      fold(fold_string, string, len);
    }
    else{

    }*/
  }

  return 0;
}

int string_len(char string[], int lim){
  int c, i;

  for(i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
    string[i] = c;
  }
  if(c == '\n'){
    string[i] = c;
    ++i;
  }

  string[i] = '\0';
  return i;
}

void fold(char to[], char from[], int len){
  int i;
  int c;
  int x;
  int cursor;
  int inword = 0;

  cursor = 0;
  if(from[MAXLINE-1] > 33 && from[MAXLINE-1] < 126 && from[MAXLINE-1] != '\0'){
    inword = 1;

    x = 0;
    while(inword == 1){
      if(from[(MAXLINE-1)-x] == ' '){
        inword = 0;
        cursor = (MAXLINE-1)-x;
        break;
      }

      ++x;
    }

    while(from[cursor-x]
  }

  i = 0;
  while(i < len){
    // printf("%c", from[i]);
    if(from[i] > 33 && from[i] < 126 && from[i] != '\0'){
      // printf(" >");
    }

    printf("\n");
    ++i;
  }
}

/*
int word_len(char word[], int lim){
  int c, i;

  for(i = 0; i < lim-1; ++i){

  }

  return i;
}
*/

