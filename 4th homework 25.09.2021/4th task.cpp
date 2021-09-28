#include <iostream>


enum class Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
};


int day_in_month(int month, bool flag) {
    int day;
	switch (Months(month)) {
        case Months::January:
        case Months::March:
        case Months::May:
        case Months::July:
        case Months::August:
        case Months::October:
        case Months::December:
            day = 31;
            break;
        case Months::April:
        case Months::June:
        case Months::September:
        case Months::November:
            day = 30;
            break;
        case Months::February:
            if (flag) {
                day = 29;
            }
            else {
                day = 28;
            }
            break;
        default:
            break;
    }
    return day;
}


int main() {
    bool is_leap;
    int month;
    
    std::cout << "Is this a leap year?(1/0)" << std::endl;
    std::cin >> is_leap;
    std::cout << "Enter a mounth number:" << std::endl;
    std::cin >> month;
    std::cout << day_in_month(month, is_leap) << " days";
}