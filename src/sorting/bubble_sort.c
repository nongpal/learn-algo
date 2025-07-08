#include "sorting/bubble_sort.h"
#include "utilities/swaps.h"

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
