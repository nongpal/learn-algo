#include <stdio.h>
#include "sorting/insertion_sort.h"

int main() {
  int n, i;

  printf("Enter the amount of elements of an array: ");
  scanf("%d", &n);

  int L[n];
  printf("Enter the sequence of number (e.g. 1 2 3 4 5 6): ");
  for (i = 0; i < n; ++i)
    scanf("%d", &L[i]);

  insertionSort(L, n);

  printf("The result is: ");
  for (i = 0; i < n; ++i)
    printf("%d ", L[i]);
  printf("\n");
}
