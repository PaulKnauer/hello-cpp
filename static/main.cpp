#include <iostream>
#include "static.h"

int main() {
  Static staticLib;

  std::cout << "Hello " << staticLib.getName() << '\n';
  staticLib.setName("Paul");
  std::cout << "Hello " << staticLib.getName() << '\n';
  return 0;
}
