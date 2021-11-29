#include <iostream>


template <typename ... Args>
int size_of_packet(Args ... args) {
	return (sizeof(args) + ...);
}


template <typename Last>
int req_size_of_packet(Last last) {
	return sizeof(last);
}


template <typename First, typename ... Args>
int req_size_of_packet(First first, Args ... args) {
	return sizeof(first) + req_size_of_packet(args ...);
}


int main() {
	std::cout << size_of_packet(1.f, 2, true) << std::endl;
	std::cout << req_size_of_packet(1.f, 2, true) << std::endl;
}