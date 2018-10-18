#include <stdio.h>
#include "ifttt.h"

int main(int argc, char *argv[])
{


  printf("Trying to connect to server\n");
  ifttt("http://red.eecs.yorku.ca:8080/trigger/event/with/key/123", "Tom", "11111", "mybad 33333");
  return 0;
}
