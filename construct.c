#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

struct trip {
  int cost;
  char *place;
};

int main(){
  struct trip hawaii;
  struct trip fiji;

  hawaii.cost = 2304;
  hawaii.place = 'a'

  fiji = hawaii;

  printf("hawaii: %d\t%c\n", hawaii.cost, hawaii.place);

}
