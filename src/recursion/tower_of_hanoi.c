#include "recursion/tower_of_hanoi.h"
#include <stdio.h>

void hanoi(int disks, char from, char to, char aux) {
  if (disks == 1)
    printf("Move disk \"1\" from \"%c\" to \"%c\".\n", from, to);
  else {
    hanoi(disks - 1, from, aux, to);
    printf("Move disk \"%d\" from \"%c\" to \"%c\".\n", disks, from, to);
    hanoi(disks - 1, aux, to, from);
  }
}
