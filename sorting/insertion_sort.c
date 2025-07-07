#include <stdio.h>

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
