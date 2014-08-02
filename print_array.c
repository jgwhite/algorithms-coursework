#include <stdio.h>
#include "print_array.h"

void print_array(int size, int array[])
{
  for (int i = 0; i < size; i++) {
    printf("%d", array[i]);
    if (i < size - 1) {
      printf(",");
    }
  }
}
