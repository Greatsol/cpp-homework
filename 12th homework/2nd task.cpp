#include <iostream>


template<int n>
struct number_fbi {
	static inline const int number = number_fbi<n - 1>::number + number_fbi<n - 2>::number;
};


template<>
struct number_fbi<0> {
	static inline const int number = 0;
};
template<>
struct number_fbi<1> {
	static inline const int number = 1;
};



int main() {
	std::cout << number_fbi<10>::number;
}