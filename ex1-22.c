#include <stdio.h>

#define MAXSTRING 1000
#define MAXLINE 10

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
  int remember = 0;

  // find out if the element in from[] at the index of MAXLiNE-1 is within a word 
  cursor = 0;
  if(from[MAXLINE-1] > 33 && from[MAXLINE-1] < 126 && from[MAXLINE-1] != '\0'){
    inword = 1;

    // set cursor at first whitespace iterating backwards from MAXLINE
    i = 0;
    while(inword == 1){
      if(from[(MAXLINE-1)-i] == ' '){
        inword = 0;
        cursor = (MAXLINE-1)-i;
        break;
      }

      ++i;
    }
    remember = cursor+1;
    printf("cursor: %d, from[cursor]: %c\n", cursor, from[cursor]);

    // set cursor at the last word(non-space char) of the line below MAXLINE
    i = 0;
    while(inword == 0 && cursor > 0){
      if(from[cursor-i] != ' '){
        inword = 1;
        cursor -= i;
        break;
      }

      ++i;
    }
    printf("cursor: %d, from[cursor]: %c\n", cursor, from[cursor]);


    // build new string (append to to[])
    i = 0;
    while(i <= cursor){
      to[i] = from[i];
      ++i;
    }
    to[i] = '\n';
    ++cursor;

    i = 0;
    while(i < len-remember){
      to[cursor+(i+1)] = from[remember+i];
      printf("---i: %d, to[cursor]: %c, from[remember]: %c\n", i, to[cursor+(i+1)], from[remember+i]);
      ++i;
    }
  }

  if(len-remember > MAXLINE){
  }

  // print from[];
  printf("from[]:\n");
  i = 0;
  while(i < len){
    printf("%c", from[i]);
    ++i;
  }
  printf("\n");

  // print to[]
  printf("to[]:\n");
  i = 0;
  while(i < len){
    printf("%c", to[i]);
    ++i;
  }
  printf("\n");
}
