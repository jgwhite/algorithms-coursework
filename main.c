#include <stdio.h>
#include "print_array.h"
#include "merge_sort.h"

int main(int argc, char *argv[])
{
  int input[] = { 5, 3, 8, 2, 9, 1, 7, 4, 6, 0 };
  int size = sizeof(input) / sizeof(int);
  int *output = merge_sort(size, input);

  printf("Merge sort: ");
  print_array(size, output);
  printf("\n");

  return 0;
}
