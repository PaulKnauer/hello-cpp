#include "hello.h"

int main(void) {
	Hello *hello = new Hello();
	hello->world("Paul");
	return 0;
}
