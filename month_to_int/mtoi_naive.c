#include <stdio.h>

int month_to_i(char *month) {
  // Gets a valid 3-digit month code and returns an integer.
  if (month == "JAN") return 1;
  if (month == "FEB") return 2;
  if (month == "MAR") return 3;
  if (month == "APR") return 4;
  if (month == "MAY") return 5;
  if (month == "JUN") return 6;
  if (month == "JUL") return 7;
  if (month == "AUG") return 8;
  if (month == "SEP") return 9;
  if (month == "OCT") return 10;
  if (month == "NOV") return 11;
  if (month == "DEC") return 12;
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
