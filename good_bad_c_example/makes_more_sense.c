#include <stdio.h>

main() {
  char *ch = "makes sense";
  char *p = ch;
  ++p;
  printf(" %d, %s, %s", p, p, ch);
}
