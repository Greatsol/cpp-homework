#include <iostream>

int main() {
	int a, b;
	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> a >> b;
	std::cout << "a =  " << a << " b = " << b << std::endl;
	a = a + b;
	b = -(b - a);
	a = a - b;
	std::cout << "a =  " << a << " b = " << b;
	return 0;
}