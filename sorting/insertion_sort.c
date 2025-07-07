#include "insertion_sort.h"

void insertionSort(int *arr, int length) {
  int i, j, x;
  for (i = 1; i < length; ++i) {
    x = arr[i];
    j = i;
    while ((j > 0) && (arr[j-1] > x)) {
      arr[j] = arr[j-1];
      --j;
    }
    arr[j] = x;
  }
}
