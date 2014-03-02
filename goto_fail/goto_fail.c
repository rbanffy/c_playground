#include <stdio.h>

static int returns_zero() {
  return 0;
}

static int returns_one() {
  return 1;
}

int main() {
  if (returns_one() == 0)
    goto fail;
  goto fail;
  if (returns_zero() == 0)
    printf ("this will never happen\n");
  return 0;
 fail:
  return 1;
}
