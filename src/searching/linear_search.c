#include "searching/linear_search.h"

int linearSearch(int *list, int target, int length) {
  int i;

  for (i = 0; i < length; ++i){
    if (list[i] == target)
      return i;
  }
  return -1;
}
