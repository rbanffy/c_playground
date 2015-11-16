#include <stdio.h>

int month_to_i(char *month) {
  // Gets a valid 3-digit month code and returns an integer.
  if (month[2] == 'N') {  // JAN or JUN
    if (month[1] == 'A') return 1;
    if (month[1] == 'U') return 6;
  }
  if (month[2] == 'R') {  // MAR or APR
    if (month[0] == 'M') return 3;
    if (month[0] == 'A') return 4;
  }
  if (month[0] == 'F') return 2;  // FEB
  if (month[2] == 'Y') return 5;  // MAY
  if (month[2] == 'L') return 7;  // JUL
  if (month[2] == 'G') return 8;  // AUG
  if (month[0] == 'S') return 9;  // SEP
  if (month[0] == 'O') return 10; // OCT
  if (month[0] == 'N') return 11; // NOV
  if (month[0] == 'D') return 12; // DEC
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
