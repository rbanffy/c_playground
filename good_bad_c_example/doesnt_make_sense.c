#include <stdio.h>

main() {
  char ch = 'c';
  char *p = &ch;
  ++p;
  printf("%p, %s\n", p, p);
}
