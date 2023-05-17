#include <iostream>
#include <unistd.h>

int main(int argc, char* argv[]) {
	int sleepTime = atoi(argv[1]);
	//int sleepTime = int(argv[1]);
	//std::cout << sleepTime << "[dbg]sleept";
	sleep(sleepTime);
}
