#ifndef HELLO_H
#define HELLO_H

#include <string>

class Hello {
public:
  Hello();
  void world(const std::string& name) const;
};

#endif
