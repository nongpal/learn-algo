#include <stdio.h>
#include "sorting/selection_sort.h"
#include "utilities/swaps.h"

void selectionSort(int *arr, int length) {
  int i, j, jMin;

  for (i = 0; i < length - 1; ++i) {
    jMin = i;

    for (j = i + 1; j < length;  ++j) {
      if (arr[j] < arr[jMin])
        jMin = j;
    }

    if (jMin != i)
      swap(&arr[i], &arr[jMin]);
  }
}
