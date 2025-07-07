#include <stdio.h>

void swap(int* x, int* y){
  int tmp;

  tmp = *x;
  *x = *y;
  *y = tmp;
}

void bubbleSort(int *arr, int length) {
  int newn;

  do {
    newn = 0;
    for (int i = 1; i < length; ++i) {
      if (arr[i-1] > arr[i]){
        swap(&arr[i-1], &arr[i]);
        newn = i;
      }  // END OF if
    }  // END OF for
    length = newn;
  } while (length > 1);
}  //  END OF PROCEDURE

int main() {
  int n, i;

  printf("Enter the amount of elements of an array: ");
  scanf("%d", &n);

  int L[n];
  printf("Enter the sequence of number (e.g. 1 2 3 4 5 6): ");
  for (i = 0; i < n; ++i)
    scanf("%d", &L[i]);

  bubbleSort(L, n);

  printf("The result is: ");
  for (i = 0; i < n; ++i)
    printf("%d ", L[i]);
  printf("\n");
}
