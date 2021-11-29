#include <iostream>


template <typename Function, typename ... Args>
auto call_function(Function function, Args ... args) {
	return function(args ...);
}


auto division(double x, double y) {
	return (y != 0) ? x / y : INFINITY;
}


int main() {
	std::cout << call_function([](int x) { return x; }, 1) << std::endl;
	std::cout << call_function(division, 3, 0) << std::endl;
}
