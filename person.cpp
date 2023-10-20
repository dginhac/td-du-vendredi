// person.cpp
#include <iostream>
#include "person.h"
#include "date.h"

Person::Person(std::string firstname, std::string lastname, int gender, Date birthday) {
  _firstname = firstname;
  _lastname = lastname;
  _gender = gender;
  _birthday = birthday;
}

std::string Person::getFullName() {
  std::string gender;
  if (_gender==1) {
    gender = "Mr";
  }
  else {
    gender = "Ms";
  }
  return gender + " " + _firstname + " " + _lastname;
}
