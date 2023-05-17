#include <iostream>
#include <unistd.h>
// This is in C++ because it's easier to do in C++.

int main() {
	std::string uusername = getlogin();
	std::cout << uusername << std::endl;
	return 0;
}
