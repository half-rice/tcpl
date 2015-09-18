#include <stdio.h>
#include "SDL2.h"

struct man{
  int x, y;
  short life;
  char *name;
};

void structs(){
  man man;
  man.x = 0;
  man.y = 0;
  man.life = 100;
  man.name = "name";
}

int main(){

  return 0;
}