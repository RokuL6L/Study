#include "std.h"

namespace one {
	void hello() { cout << "hello, world?" << endl; }
}

void exam1() {
	cout << "Hello, World!" << endl;
}

int main() {
	one::hello();

	return 0;
}