#include <iostream>


struct Cat {
	Cat(std::string n): name(n), age(0), health(0)
	{}

	~Cat()
	{}

	void play_with_cat() {
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

	void feed_cat() {
		health += 1;
		std::cout << "You feed cat.\n" << "Pretty hums." << std::endl;
	}

	void look_at_cat() {
		std::cout << "You look at your cat.\n" << "Condition of your cat:\n" 
			<< "name = " << name << "\nage = " << age << "\nhp = " << health << std::endl;
	}

	std::string name;
	int age;
	int health;
};


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