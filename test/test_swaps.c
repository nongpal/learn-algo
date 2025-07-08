#include <stdio.h>
#include "utilities/swaps.h"

int main() {
  int a, b;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("Before swap, a = %d and b = %d\n", a, b);

  swap(&a, &b);

  printf("After swap, a = %d and b = %d\n", a, b);
}
