#include <cstdlib>
#include <iostream>

int main() {
  const char* env_vars[] = {"PWD", "HOME", "TTY", "LIB", "USER"};

  for (const char* name : env_vars) {
    if (const char* env_val = std::getenv(name)) {
      std::cout << name << '=' << env_val << '\n';
    } else {
      std::cout << name << " not set" << '\n';
    }
  }

  return 0;
}
