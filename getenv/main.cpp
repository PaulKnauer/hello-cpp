#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	const char *env_var[5] = {"PWD", "HOME", "TTY", "LIB", "USER"};

	for (int i = 0; i < 5; i++) {
		char *env_val = getenv(env_var[i]);

		if (env_val != NULL)
			cout << env_var[i] << "=" << env_val << endl;
		else
			cout << env_var[i] << " not set" << endl;
	}
}
