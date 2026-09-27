#include <iostream>
#include <ctime>

int main() {
	srand(time(NULL));

	char map[5][10] = {
		{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
	};

	unsigned short row = 0 + rand() % 5;
	unsigned short col = 0 + rand() % 10;
	bool destroy = false;
	unsigned short num1, num2;
	unsigned short i, w;

	for (i = 0; i < 5; i++) {
		for (w = 0; w < 10; w++) {
			std::cout << map[i][w] << " ";
		}

		std::cout << std::endl;
	}

	while (!destroy) {
		std::cout << std::endl << "Enter (0-4) (0-9): ";
		std::cin >> num1 >> num2;

		if (num1 >= 5 || num2 >= 10){
			std::cout << std::endl << "Error! Please, enter true numbers!" << std::endl;
		}

		else if(num1 == row && num2 == col) {
			std::cout << std::endl << "Congratulation!" << std::endl;
			destroy = true;
			
			map[row][col] = 'X';

			for (i = 0; i < 5; i++) {
				for (w = 0; w < 10; w++) {
					std::cout << map[i][w] << " ";
				}

				std::cout << std::endl;
			}
		}

		else {
			std::cout << std::endl << "You could not find. Please, try again!" << std::endl;
			map[num1][num2] = '*';

			for (i = 0; i < 5; i++) {
				for (w = 0; w < 10; w++) {
					std::cout << map[i][w] << " ";
				}

				std::cout << std::endl;
			}
		}
	}

	return 0;
}
