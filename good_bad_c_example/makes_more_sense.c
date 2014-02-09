#include <stdio.h>

main() {
  char *ch = "makes sense";
  char *p = ch;
  ++p;
  printf("%p, %s, %s\n", p, p, ch);
}
