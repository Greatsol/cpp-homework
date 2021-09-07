#include <iostream>
#include <iomanip>

int main() {
    std::string name;
    int price, temperature;
    bool hasCashback;
    std::cout << "Product's name: ";
    std::cin >> name;
    std::cout << "Product's price: ";
    std::cin >> price;
    std::cout << "Is cash-back available for this product? (true/false) ";
    std::cin >> std::boolalpha >> hasCashback;
    std::cout << "Maximum storing temperature: ";
    std::cin >> temperature;

    std::cout << '\n' << "*************** OUTPUT ***************" << "\n\n";

    std::cout << name << '\n';
    std::cout << "Price:" << std::setfill('.') << std::setw(15) << "" << std::setw(8) 
        << std::setfill('0') << std::uppercase << std::hex << price << std::endl;
    std::cout << "Has cash-back:" << std::setfill('.') << std::setw(15) 
        << std::boolalpha << hasCashback << std::endl;
    std::cout << "Max temperature:" << std::setfill('.') << std::setw(13) 
        << std::dec << std::showpos << temperature;

    return 0;
}