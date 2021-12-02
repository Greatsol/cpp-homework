#include <iostream>


template<typename T> struct add_const { typedef const T type; };

template<typename T> struct remove_const { typedef T type; };
template<typename T> struct remove_const<const T> { typedef T type; };

template<typename T>
using add_const_t = typename add_const<T>::type;

template< typename T>
using remove_const_t = typename remove_const<T>::type;


int main() {
	int x = 42;
	std::cout << std::boolalpha;
	std::cout << std::is_const_v<decltype(x)> << std::endl;
	std::cout << std::is_const_v<add_const_t<decltype(x)>> << std::endl;

	const int y = 42;
	std::cout << std::is_const_v<decltype(y)> << std::endl;
	std::cout << std::is_const_v<remove_const_t<decltype(y)>>;
}