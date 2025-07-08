#include <stdio.h>
#include "recursion/factorial.h"

int main() {
  int n;
  unsigned long long result;

  printf("Enter a number: ");
  scanf("%d", &n);


  if (n < 0) {
    printf("Factorial is undefined for negative numbers.\n");
    return 1;
  }

  result = factorial(n);

  printf("The factorial of %d: %llu\n", n, result);
}
