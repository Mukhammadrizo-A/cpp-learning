#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(NULL));

	short end, user;
	bool game = true;

	std::cout << "Enter: [end]" << std::endl;
	std::cin >> end;

	if (end <= 0) {
		std::cout << "Error: Number must be greater than 0!" << std::endl;
		return 1;
	}

	std::cout << "\n---Creating random number---\n" << std::endl;

	unsigned short result = 1 + rand() % end;

	std::cout << "\n---Random number was created---\n" << std::endl;

	do {
		std::cout << "Please enter number: ";
		std::cin >> user;

		if (user != result) {
			if (user < result) {
				std::cout << "Ugh, You could not found, but number is around " << user << " and " << end << std::endl;
			}
			else if (user > result) {
				std::cout << "Ugh, You could not found, but number is around 1 and " << user << std::endl;
			}
		}
		else {
			game = false;
		}
	} while (game == true);

	std::cout << "Congratulations! You found the number, so you won!\n" << std::endl;

	return 0;
}
