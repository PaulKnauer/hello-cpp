#include <iostream>
#include "static.h"

using namespace std;

int main(void)
{
  Static *staticLib = new Static();

  cout << "Hello " << staticLib->getName() << endl;
  staticLib->setName("Paul");
  cout << "Hello " << staticLib->getName() << endl;
}
