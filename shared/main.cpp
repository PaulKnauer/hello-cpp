#include <iostream>
#include "shared.h"

using namespace std;

int main(int argc, char *argv[])
{
  Shared m;

  cout << m.getx() << endl;
  m.setx(10);
  cout << m.getx() << endl;
}
