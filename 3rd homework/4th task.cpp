#include <iostream>
#include <vector>
#include <functional>


double run_functions(std::function <double(double, double)> function, double x, double y) {
	return function(x, y);
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
		[](double x, double y) {
			if (y != 0) return x / y;
			else std::cout << "Zero division error\n";
		}
	};

	std::cout << "Lambda functions results:" << std::endl;
	for (std::function <double(double, double)> func : v) {
		std::cout << run_functions(func, x, y) << std::endl;
	}
}