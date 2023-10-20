// person.h
#include <iostream>

#include "date.h"

class Person {
public:
  Person(std::string firstname, std::string lastname, int gender, Date birthday);
  std::string getFullName();
private:
  std::string _firstname;
  std::string _lastname;
  int _gender;
  Date _birthday;
};
