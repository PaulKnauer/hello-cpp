#include "static.h"

#include <string>

Static::Static() {
    name = "<name>";
}

void Static::setName(string name) {
    this->name = name;
}

string Static::getName() {
    return name; 
}