#include <iostream>

int main() {
	srand(time(NULL));

	short coin = 1 + rand() % 2;

	if (coin == 1) {
		std::cout << "Result: Heads";
	}
	else {
		std::cout << "Result: Tails";
	}

	return 0;
}
