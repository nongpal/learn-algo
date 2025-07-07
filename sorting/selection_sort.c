#include <stdio.h>

void swap(int* x, int* y){
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}


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

int main() {
  int n, i;

  printf("Enter the amount of elements of an array: ");
  scanf("%d", &n);

  int L[n];
  printf("Enter the sequence of number (e.g. 1 2 3 4 5 6): ");
  for (i = 0; i < n; ++i)
    scanf("%d", &L[i]);

  selectionSort(L, n);

  printf("The result is: ");
  for (i = 0; i < n; ++i)
    printf("%d ", L[i]);
  printf("\n");
}

