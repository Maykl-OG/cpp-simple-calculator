#include <iostream>
float a;
float b;
char c;
char g;

int main() {
	do {
		std::cout << "type the first number : ";
		std::cin >> a;
		std::cout << "type the second number : ";
		std::cin >> b;
		std::cout << "type the operator [ + - * / ]: ";
		std::cin >> c;

		switch (c) {
		case '+':
			std::cout << a << " + " << b << " = " << a + b << std::endl;
			break;
		case '-':
			std::cout << a << " - " << b << " = " << a - b << std::endl;
			break;
		case '*':
			std::cout << a << " * " << b << " = " << a * b << std::endl;
			break;
		case '/':
			std::cout << a << " / " << b << " = " << a / b << std::endl;
			break;
		}

		std::cout << "continue or no?: Y/N?" << std::endl;
		std::cin >> g;

	}
	while (g == 'Y' or g == 'y');
}