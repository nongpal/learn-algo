#include "binary_search.h"

int binarySearch(int* arr, int length, int target) {
  int L, R, m;

  L = 0;
  R = length - 1;

  while (L <= R) {
    m = L + ((R - L) / 2);
    if (arr[m] < target)
      L = m + 1;
    else if (arr[m] > target)
      R = m - 1;
    else
     return m;
  }
  return -1;
}
