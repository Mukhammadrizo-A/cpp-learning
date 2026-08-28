#include iostream
int main() {
	unsigned int age;
	float weight;
	double money;
	char currency;
	bool happy;

	stdcout  How old are you  stdendl;
	stdcin  age;
	
	stdcout  How many kg are you  stdendl;
	stdcin  weight;

	stdcout  How much money have you got  stdendl;
	stdcin  money;

	stdcout  Which currency ($, €, £ or etc.)n;
	stdcin  currency;

	std::cout << "How are you? (Happy = true / unhappy = false) << std::endl;
	sdt::cin >> happy;
		
	stdcout  nAge   age  stdendl  Weight   weight  stdendl  Cash   money  currency << std::endl << "Happy: " << happy;
}
