#include <iostream>
#include "shared.h"

int main() {
  Shared sharedLib;

  std::cout << "Hello " << sharedLib.getName() << '\n';
  sharedLib.setName("Paul");
  std::cout << "Hello " << sharedLib.getName() << '\n';
  return 0;
}
