#ifndef SHARED_H
#define SHARED_H

#include <string>

class Shared {
public:
  Shared();
  void setName(const std::string& name);
  const std::string& getName() const;

private:
  std::string name_;
};

#endif
