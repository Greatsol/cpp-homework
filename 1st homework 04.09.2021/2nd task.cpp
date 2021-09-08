#include <iostream>
#include <iomanip>
#include <string>

int main() {
    double value;
    const int length_coef = 100;
    const int weight_coef = 1000;
    const int time_coef = 1;
    const double el_charge_coef = 3e9;
    std::string name_1, name_2;


    std::cout << "Input format:\nvalue m/kg/s/C\nExample:\n10 kg\n";
    std::cin >> value >> name_1;

    if (name_1 == "m") {
        value *= length_coef;
        name_2 = "cm";
    }
    else if (name_1 == "kg") {
        value *= weight_coef;
        name_2 = "g";
    }
    else if (name_1 == "s") {
        value *= time_coef;
        name_2 = "s";
    }
    else if (name_1 == "C"){
        value *= el_charge_coef;
        name_2 = "Fr";
    }
    
    std::cout << std::setprecision(3) << std::fixed << value << " " << name_2 << '\n';
    
    return 0;
}