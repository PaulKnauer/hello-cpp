#include <iostream>
#include "static.h"

using namespace std;

int main(int argc, char *argv[])
{
  Static m;

  cout << m.getx() << endl;
  m.setx(10);
  cout << m.getx() << endl;
}
