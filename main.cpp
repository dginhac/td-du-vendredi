#include <iostream>

#include "date.h"

int main() {
  Date date(10, 14);
  std::cout << "month: " << date.month() << std::endl;
  std::cout << "day: " << date.day() << std::endl;
  return 0;
}
