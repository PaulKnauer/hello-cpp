#include "hello.h"

int main(void) {
	Hello *hello = new Hello();
	hello->world("Ross");
	return 0;
}
