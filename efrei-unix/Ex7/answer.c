#include "unistd.h"

int main (int ac, char **av){

  char c ='a';

  while (c <='z'){
    printf("%c \n", c);
    c++;
  }
  return 0;
}
