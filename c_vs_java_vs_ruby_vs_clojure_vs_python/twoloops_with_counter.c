#include <stdio.h>

int main() {
  int i = 0, j, counter = 0;
  while (i < 100000) {
    j = i;
    while (j < 100000) {
      j++;
      counter++;
    }
    i++;
  }
  printf("%d iterations", counter);
}
