#include "shared.h"

#include <string>

Shared::Shared() {
    name = "<name>";
}

void Shared::setName(string name) {
    this->name = name;
}

string Shared::getName() {
    return name; 
}
