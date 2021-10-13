#pragma once
#include <iostream>


class Cat {
	public:
		Cat(const std::string& n) : name(n), age(0), health(0)
		{}

		void play_with_cat();

		void feed_cat();

		void look_at_cat();

	private:
		std::string name;
		int age;
		int health;
};