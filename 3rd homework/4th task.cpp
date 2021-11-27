#include <iostream>
#include <vector>
#include <functional>


int run_functions(std::function <double(double, double)> function, double x, double y) {
	std::cout << function(x, y) << std::endl;
	return 0;
}


int main() {
	double x, y;
	std::cout << "x and y:" << std::endl;
	std::cin >> x;
	std::cin >> y;
	std::vector <std::function <double(double, double)>> v =
	{
		[](double x, double y) { return x + y; },
		[](double x, double y) { return x - y; },
		[](double x, double y) { return x * y; },
		[](double x, double y) { return x / y; }
	};

	std::cout << "Lambda functions results:" << std::endl;
	for (std::function <double(double, double)> func : v)
	{
		run_functions(func, x, y);
	}
}