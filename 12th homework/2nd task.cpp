#include <iostream>


template<unsigned n>
struct number_fbi {
	static const int number = number_fbi<n - 1>::number + number_fbi<n - 2>::number;
};


template<>
struct number_fbi<0> {
	static const int number = 0;
};
template<>
struct number_fbi<1> {
	static const int number = 1;
};


template<int n>
static inline constexpr int fib = number_fbi<n>::number;


int main() {
	std::cout << fib<10>;
}