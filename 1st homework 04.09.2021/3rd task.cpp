#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>


bool is_equal(double x, double y) { 
    return std::abs(x - y) < std::numeric_limits<double>::epsilon();
}


int main() {
    double coef_a, coef_b, coef_c;
    double x1, x2;
    
    std::cout << "ax^2 + bx + c = 0" << std::endl;
    std::cout << "Coefficient a: ";
    std::cin >> coef_a;
    std::cout << "Coefficient b: ";
    std::cin >> coef_b;
    std::cout << "Coefficient c: ";
    std::cin >> coef_c;


    if (is_equal(coef_a, 0.0)) {
        if (not is_equal(coef_b, 0.0)) {
            std::cout << "x = " << -coef_c / coef_b;
        }
        else if (not is_equal(coef_c, 0.0)) {
            std::cout << "No solutions.";
        }
        else {
            std::cout << "Unlimited number of solutions.";
        }
    }
    else {

        double D = coef_b * coef_b - 4.0 * coef_a * coef_c;

        if (is_equal(D, 0.0)) {
            x1 = -coef_b / (2.0 * coef_a);
            std::cout << "x = " << x1;
        }
        else if (D > 0) {
            x1 = (-coef_b + sqrt(D)) / (2.0 * coef_a);
            x2 = (-coef_b - sqrt(D)) / (2.0 * coef_a);
            std::cout << "x1 = " << x1 << '\n' << "x2 = " << x2;
        }
        else {
            std::cout << "No solutions.";
        }
    }

    return 0;
}