#include <stdio.h>

main() {
  char ch0 = 'a';
  char ch1 = 'b';
  char ch2 = 'c';

  char *p = &ch1;
  printf("%d, %c, %c\n", p, *p, ch1);
  ++p;
  printf("%d, %c, %c\n", p, *p, ch1);
  printf("%d, %d, %d\n", &ch0, &ch1, &ch2); // Prevent the compiler from optimizing away the char constants
}
