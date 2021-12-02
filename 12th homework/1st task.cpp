#include <iostream>


template<int n, int k>
struct BC {
	static const int bc = BC<n - 1, k>::bc + BC<n - 1, k - 1>::bc;
};


template<int n>
struct BC<n, 0> {
	static const int bc = 1;
};
template<int n>
struct BC<n, n> {
	static const int bc = 1;
};


template<int n, int k>
static inline constexpr int bc = BC<n, k>::bc;


int main() {
	std::cout << bc<5, 2>;
}