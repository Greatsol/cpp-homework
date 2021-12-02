#include <iostream>


template<unsigned n>
struct number_fbi {
	const int number = number_fbi<n - 1>::number + F<n - 2>::number;
};


template<>
struct number_fbi<0> {
	const int number = 0;
};
template<>
struct number_fbi<1> {
	const int number = 1;
};
template<>
struct number_fbi<2> {
	const int number = 1;
};


int main() {
	std::cout << number_fbi<10>::number;
}