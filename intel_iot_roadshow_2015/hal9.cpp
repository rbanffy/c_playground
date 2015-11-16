// compile with g++ hal9.cpp -o hal9 -lmraa -I/usr/include/upm -lupm-i2clcd -lupm-grove -std=c++11

#include "jhd1313m1.h"
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>

main(int argc, char **argv)
{
  // 0x62 RGB_ADDRESS, 0x3E LCD_ADDRESS
  std::vector<std::string> messages = {"CPU", "MEM", "ENV", "NUC", "ATM", : "COM"};

  upm::Jhd1313m1 *lcd = new upm::Jhd1313m1(6, 0x3E, 0x62);
  int r, g, b, message;
  for (;;) {
    message = rand() % 4;
    r = (rand() % 2) * 128 + 128;
    g = (rand() % 2) * 128 + 128;
    b = (rand() % 2) * 128 + 128;
    lcd->setCursor(0,6);
    lcd->write(messages[message]);
    lcd->setColor(r, g, b);
    std::this_thread::sleep_for(std::chrono::seconds(5));
  }
  lcd->close();
}
