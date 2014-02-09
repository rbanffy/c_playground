#include <stdio.h>

main() {
  char ch0 = 'e';
  char ch1 = 'v';
  char ch2 = 'i';

  char *p = &ch1;
  printf("%p, %c, %c\n", p, *p, ch1);
  ++p;
  printf("%p, %c, %c\n", p, *p, ch1);
  p-=2;
  printf("%p, %c, %c\n", p, *p, ch1);

  printf("%p, %p, %p\n", &ch0, &ch1, &ch2); // Prevent a clever compiler from
                                            // optimizing away the char "unused"
                                            // constants
}
