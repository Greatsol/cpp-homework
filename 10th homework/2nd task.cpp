#include <iostream>


template <typename Type, typename ... Args>
Type* return_ptr(Args ... args) {
	return new Type(args ...);
}


class Cat {
public:
	std::string name;
	std::size_t age;
	Cat(const std::string& name, std::size_t age) : name(name), age(age) {};
};


int main() {
	std::cout << return_ptr <Cat> (std::string("Oleg"), 5);
}