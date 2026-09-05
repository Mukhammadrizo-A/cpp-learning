#include <iostream>

int main() {
	short num1, num2, num3;

	std::cout << "Enter number: [start] [end] [sep]" << std::endl;
	std::cin >> num1 >> num2 >> num3;

	if (num1 < num2) {
		for (short i = num1; i <= num2; i += num3) {
			std::cout << "Number: " << i << std::endl;
		}
	}
	else if (num1 > num2) {
		for (short i = num1; i >= num2; i -= num3) {
			std::cout << "Number: " << i << std::endl;
		}
	}
	else if (num1 == num2){
		std::cout << "There are equals";
	}
	else {
		std::cout << "Error";
	}

	return 0;
}
