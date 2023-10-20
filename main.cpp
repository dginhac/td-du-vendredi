#include <iostream>

#include "date.h"
#include "person.h"

int main() {
  Date date(10, 14);
  std::cout << "month: " << date.month() << std::endl;
  std::cout << "day: " << date.day() << std::endl;

  Person person("John", "Doe", 1);
  std::cout << "Full name: " << person.getFullName() << std::endl;
  
  return 0;
}
