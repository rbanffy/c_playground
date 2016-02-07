#include <stdio.h>

void main() {
  int i = 0, j;
  while (i < 100000) {
    j = i;
    while (j < 100000) {
      j++;
    }
    i++;
  }
}
