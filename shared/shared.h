#ifndef SHARED_H
#define SHARED_H

#include <string>

using namespace std;

class Shared {
  public:
    Shared();
    void setName(string name);
    string  getName();
  private:
    string name;
};

#endif
