#include <stdio.h>
// This is the easiest one to make. It just uses terminal escape codes

int main() {
	printf("\033[H\033[2J");
}
