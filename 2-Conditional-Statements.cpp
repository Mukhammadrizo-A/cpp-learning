#include <iostream>
#include <string>

int main() {
	unsigned short age;
	std::string ticket;
	bool has_ticket = false;
	std::string type_of_ticket;
	bool adult_child;

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;

	std::cout << "Have you got ticket? (Yes / No)" << std::endl;
	std::cin >> ticket;

	if (ticket == "Yes") {
		has_ticket = true;

		std::cout << "Which ticket have you got? (Adult/Child)" << std::endl;
		std::cin >> type_of_ticket;

		if (type_of_ticket == "Adult") {
			adult_child = true;
		}
		else if (type_of_ticket == "Child") {
			adult_child = false;
		}
		else {
			std::cout << "We have not got that type of ticket";
		}
	}
	else if (ticket == "No") {
		has_ticket = false;
	}
	else {
		std::cout << "I did not understand";
	}

	if (age <= 7) {
		std::cout << "You can enter for free";
	}
	else if (age >= 7 && age <= 17 && has_ticket == true) {
		if (adult_child == true) {
			std::cout << "I am sorry, but you need ticket for children, It means you have got ticket for adults";
		}
		else{
			std::cout << "You can enter";
		}
	}
	else if (age >= 18 && has_ticket == true) {
		if (adult_child == false) {
			std::cout << "I am sorry, but you need ticket for adults, It means you have got ticket for children";
		}
		else {
			std::cout << "You can enter";
		}
	}
	else {
		std::cout << "You can not enter";
	}

	return 0;
}
