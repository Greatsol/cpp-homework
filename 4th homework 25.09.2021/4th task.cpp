#include <iostream>


enum Months {
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
	switch (month) {
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            day = 31;
            break;
        case April:
        case June:
        case September:
        case November:
            day = 30;
            break;
        case February:
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