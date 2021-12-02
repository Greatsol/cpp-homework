#include <iostream>


template<unsigned N>
struct factorial {
	static const unsigned value = N * factorial<N - 1>::value;
};
template<>
struct factorial<0> {
	static const unsigned value = 1;
};


template<unsigned N, unsigned K>
struct C {
	static const unsigned NK = N - K;
	static const unsigned value = factorial<N>::value / factorial<K>::value / factorial<NK>::value;
};


int main() {
	std::cout << C<5, 2>::value;
}