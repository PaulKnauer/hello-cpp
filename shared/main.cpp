#include <iostream>
#include "shared.h"

using namespace std;

int main(void) {
  Shared *sharedLib = new Shared();

  cout << "Hello " << sharedLib->getName() << endl;
  sharedLib->setName("Paul");
  cout << "Hello " << sharedLib->getName() << endl;
}
