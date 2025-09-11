#include "hello.h"
#include <iostream>

Hello::Hello() {
  std::cout << "Hello <name>\n";
}

void Hello::world(const std::string& name) const {
  std::cout << "Hello " << name << '\n';
}
