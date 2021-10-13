#pragma once
#include "header.hpp"


int main() {
	std::string name;

	std::cout << "What will you name your cat?\n";
	std::cin >> name;

	Cat cat(name);
	cat.feed_cat();
	cat.feed_cat();
	cat.look_at_cat();
	cat.play_with_cat();
	cat.play_with_cat();
}