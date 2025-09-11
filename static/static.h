#ifndef STATIC_H
#define STATIC_H

#include <string>

class Static {
public:
  Static();
  void setName(const std::string& name);
  const std::string& getName() const;

private:
  std::string name_;
};

#endif
