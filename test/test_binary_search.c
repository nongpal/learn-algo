#include <stdio.h>
#include <stdlib.h>
#include "searching/binary_search.h"
#include "sorting/insertion_sort.h"

int main() {
  int n, T, *L;

  printf("Enter the amount of elements of an array: ");
  scanf("%d", &n);

  L = malloc(n * sizeof(int));

  if (L == NULL) {
    printf("failed allocate memory\n");
    return 1;
  }

  printf("Enter the sequence of number (e.g. 1 2 3 4 5 6): ");
  for (int i = 0; i < n; ++i)
    scanf("%d", &L[i]);

  insertionSort(L, n);

  printf("Enter the target of the elements of an array: ");
  scanf("%d", &T);

  int result = binarySearch(L, n, T);

  (result >= 0)? printf("The target was found at index: %d\n", result):printf("The target was not found!\n");

  free(L);
}
