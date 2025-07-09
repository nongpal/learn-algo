#include <stdio.h>
#include "recursion/tower_of_hanoi.h"

int main() {
  int n;

  printf("Enter num of disks: ");
  scanf("%d", &n);

  hanoi(n, 'A', 'C', 'B');
}
