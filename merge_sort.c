#include <stdlib.h>
#include "merge_sort.h"

int *merge_sort(int size, int array[])
{
  int *result = malloc(size * sizeof(int));

  // If input array contains 0 or 1 elements, return it.
  if (size <= 1) {
    for (int i = 0; i < size; i++) {
      result[i] = array[i];
    }
  } else {
    // Determine sizes of sub-arrays.
    int s1 = size / 2;
    int s2 = size - s1;

    // Create sorted sub-arrays by recursion.
    int *a = merge_sort(s1, array);
    int *b = merge_sort(s2, array + s1);

    // Combine sorted sub-arrays to form result.
    int i = 0;
    int j = 0;

    for (int k = 0; k < size; k++) {
      if (j >= s2 || (i < s1  && a[i] < b[j])) {
        result[k] = a[i];
        i++;
      } else {
        result[k] = b[j];
        j++;
      }
    }

    free(a);
    free(b);
  }

  return result;
}
