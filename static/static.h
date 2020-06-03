#ifndef STATIC_H
#define STATIC_H

#include <string>

using namespace std;

class Static {
  public:
    Static();
    void setName(string name);
    string  getName();
  private:
    string name;
};

#endif
