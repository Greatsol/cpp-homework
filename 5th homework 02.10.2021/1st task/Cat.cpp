#pragma once
#include "header.hpp"


void Cat::play_with_cat() {
	std::cout << "You play with your cat.\n";
	health -= 1;
	if (health <= 0) {
		age = 0;
		std::cout << "You didn't feed the cat on time and he died." << std::endl;
	}
	else {
		age += 1;
		std::cout << "Your cat is " << age << " years old." << std::endl;
	}
}

void Cat::feed_cat() {
	health += 1;
	std::cout << "You feed cat.\n" << "Pretty hums." << std::endl;
}

void Cat::look_at_cat() {
	std::cout << "You look at your cat.\n" << "Condition of your cat:\n"
		<< "name = " << name << "\nage = " << age << "\nhp = " << health << std::endl;
}
