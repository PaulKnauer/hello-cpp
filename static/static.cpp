#include "static.h"

Static::Static() : name_("<name>") {}

void Static::setName(const std::string& name) {
  name_ = name;
}

const std::string& Static::getName() const {
  return name_;
}
