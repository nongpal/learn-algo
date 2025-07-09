#include <stdio.h>
#include "recursion/fibonacci.h"

int main() {
  int n;
  unsigned result;

  printf("Enter a number: ");
  scanf("%d", &n);

  result = fibonacci(n);

  printf("The %dth Fibonacci number is %u\n", n, result);
}
