#include "recursion/recursive_binsearch.h"

int recursiveBinarySearch(int *arr, int left, int right, int target) {
  int mid;

  if (left > right) {
    return -1;
  }

  mid = left + ((right - left) / 2);

  if (arr[mid] == target)
    return mid;

  else if (arr[mid] > target)
    return recursiveBinarySearch(arr, left, mid - 1, target);

  else
    return recursiveBinarySearch(arr, mid + 1, right, target);
}
