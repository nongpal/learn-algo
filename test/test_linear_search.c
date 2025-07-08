#include <stdio.h>
#include "searching/linear_search.h"

int main() {
  int n, T;

  printf("Enter the amount of elements of an array: ");
  scanf("%d", &n);

  int L[n];
  printf("Enter the sequence of number (e.g. 1 2 3 4 5 6): ");
  for (int i = 0; i < n; ++i)
    scanf("%d", &L[i]);

  printf("Enter the target of the elements of an array: ");
  scanf("%d", &T);

  int result = linearSearch(L, T, n);

  (result >= 0)? printf("The target was found at index: %d\n", result):printf("The target was not found!\n");
}
