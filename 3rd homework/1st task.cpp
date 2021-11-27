#include <iostream>

int fibonacci(int n) {
	return (n > 2) ? fibonacci(n - 1) + fibonacci(n - 2) : 1;
}

int main()
{
	int n;
	std::cout << "Enter the number of the number in the Fibbonacci sequence: ";
	std::cin >> n;
	std::cout << "The number in the Fibonacci sequence at the " << n << " place is: " << fibonacci(n) << std::endl;
}