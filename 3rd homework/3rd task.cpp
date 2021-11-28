#include <iostream>
#include <vector>
#include <algorithm>


void print_vector(const std::vector <int>& mass) {
	for (int i : mass)
	{
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}


int main() {
	int n, k;
	std::vector <int> mass{ 6, 4, 3, 4, 0, 10, 5 };

	std::sort(mass.begin(), mass.end(), [](int a, int b) {return a < b;});
	print_vector(mass);
	std::sort(mass.begin(), mass.end(), [](int a, int b) {return a > b; });
	print_vector(mass);	
}