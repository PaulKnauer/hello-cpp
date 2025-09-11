#include "shared.h"

Shared::Shared() : name_("<name>") {}

void Shared::setName(const std::string& name) {
  name_ = name;
}

const std::string& Shared::getName() const {
  return name_;
}
