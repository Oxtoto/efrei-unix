#include "unistd.h"

int main (int ac, char **av){

  char c = 'z';

  while (c >= 'a'){
    printf("%c \n", c);
    c--;
  }
  return 0;
}
