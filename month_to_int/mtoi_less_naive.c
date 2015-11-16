#include <stdio.h>

int month_to_i(char *month) {
  // Gets a valid 3-digit month code and returns an integer.
  if (month[0] == 'J') {
    if (month[1] == 'A') return 1;
    if (month[1] == 'U') {
      if (month[2] == 'N') return 6;
      if (month[2] == 'L') return 7;
    }
  }
  if (month[0] == 'F') return 2;
  if (month[0] == 'M') {
    if (month[2] == 'R') return 3;
    if (month[2] == 'Y') return 5;
  }
  if (month[0] == 'A') {
    if (month[1] == 'P') return 4;
    if (month[1] == 'U') return 8;
  }
  if (month[0] == 'S') return 9;
  if (month[0] == 'O') return 10;
  if (month[0] == 'N') return 11;
  if (month[0] == 'D') return 12;
}

int main(int argc, char *argv[])
{
  char *months[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
  int counter = 0;
  for (int i = 0; i < 1200000000; ++i) {
    ++counter;
    if (month_to_i(months[i % 12]) != (1 + i % 12)) {
      printf("%s - %d Failed.\n", months[i % 12], i);
    }
  }
  printf("%d\n", counter);
  return 0;
}
