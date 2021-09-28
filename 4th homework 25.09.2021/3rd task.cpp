#include <iostream>
#include <iomanip>


struct DateTime {
	unsigned int year : 12;
	unsigned int month : 4;
	unsigned int day : 5;
	unsigned int hours : 5;
	unsigned int minutes : 6;
	unsigned int seconds : 6;
	unsigned int milseconds : 10;

	DateTime(unsigned int y, unsigned int m, unsigned int d, unsigned int h, unsigned int min, unsigned int s, unsigned int ms):
		year(y), month(m), day(d), hours(h), minutes(min), seconds(s), milseconds(ms)
	{}

	void print_datetime() {
		std::cout << std::setw(2) << std::setfill('0') << day << "." 
			<< std::setw(2) << std::setfill('0') << month << "."
			<< year << " "
			<< std::setw(2) << std::setfill('0') << hours << ":" 
			<< std::setw(2) << std::setfill('0') << minutes << ":"
			<< std::setw(2) << std::setfill('0') << seconds << "."
			<< std::setw(3) << std::setfill('0') << milseconds;
	}	
};


int main() {
	unsigned int y, m, d, h, min, s, ms;

	std::cout << "Enter year:" << std::endl;
	std::cin >> y;
	std::cout << "Enter month:" << std::endl;
	std::cin >> m;
	std::cout << "Enter day:" << std::endl;
	std::cin >> d;
	std::cout << "Enter hour:" << std::endl;
	std::cin >> h;
	std::cout << "Enter minutes:" << std::endl;
	std::cin >> min;
	std::cout << "Enter seconds:" << std::endl;
	std::cin >> s;
	std::cout << "Enter milseconds:" << std::endl;
	std::cin >> ms;

	DateTime datetime(y, m, d, h, min, s, ms);
	datetime.print_datetime();
}