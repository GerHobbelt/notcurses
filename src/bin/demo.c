#include <stdio.h>
#include <stdlib.h>
#include <notcurses.h>

int main(void){
  struct notcurses* nc;
  if((nc = notcurses_init(NULL)) == NULL){
    return EXIT_FAILURE;
  }
  if(notcurses_setrgb(nc, 200, 0, 200)){
    return EXIT_FAILURE;
  }
  if(notcurses_render(nc)){
    return EXIT_FAILURE;
  }
  if(notcurses_stop(nc)){
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
