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
		[](double x, double y) { return x / y; }
	};

	std::cout << "Lambda functions results:" << std::endl;
	for (auto i = 0U; i < v.size(); i++) {
		if (i == 3 && y == 0) continue;
		std::cout << run_functions(v[i], x, y) << std::endl;
	}
}