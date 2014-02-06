#include <stdio.h>

main() {
  char ch = 'c';
  char ch2 = 'd';
  char *p = &ch;
  ++p;
  printf(" %d, %s, %c", p, p, ch2);
}
