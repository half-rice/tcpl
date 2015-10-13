#include <stdio.h>
#include <string.h>

#define IN  1     /* inside a word */
#define OUT 0     /* outside a word */

/* How would  you  test the word count program? What kinds of
   input are most likely to uncover bugs if there are any? */
main(){
  int c, nl, nw, nc, state;
  char x[100] = "wtf-haha()!@^#*> o <> no???\ttest\n\n";

  state = OUT;
  nl = nw = nc = 0;

  int i;
  for(i = 0; i <= strlen(x); ++i){ 
    ++nc;
    if(c == '\n')
      ++nl;
    if(c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if(state == OUT){
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}