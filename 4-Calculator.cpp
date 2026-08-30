#include <iostream>

int main() {
	double num1, num2, ans;
	char sym;

	std::cout << "Enter [number] and [symbol] and [number] (symbol: +, -, * or :)" << std::endl;
	std::cin >> num1 >> sym >> num2;

	switch (sym) {
	case '+':
		ans = num1 + num2;
		break;

	case '-':
		ans = num1 - num2;
		break;

	case '*':
		ans = num1 * num2;
		break;

	case ':':
		ans = num1 / num2;
		break;

	default:
		ans = 0;
		std::cout << "Error" << std::endl;
	}

	std::cout << "Answer: " << ans;

	return 0;
}
