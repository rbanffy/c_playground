#include <stdio.h>

main() {
  char ch = 'c';
  char *p = &ch;
  ++p;
  printf(" %d, %s", p, p);
}
