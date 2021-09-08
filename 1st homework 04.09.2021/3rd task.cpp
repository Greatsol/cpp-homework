#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>


double check_for_null(double coef) {
    if (abs(coef) < std::numeric_limits<double>::epsilon()) {
        coef = 0;
    }
    return coef;
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

    coef_a = check_for_null(coef_a);
    coef_b = check_for_null(coef_b);
    coef_c = check_for_null(coef_c);

    if (coef_a == 0) {
        if (coef_b == 0 || coef_c == 0) {
            std::cout << "Unlimited number of solutions.";
        }
        else if (coef_b == 0) {
            std::cout << "No solution.";
        }
        else if (coef_c == 0) {
            std::cout << "x = 0";
        }
        else {
            std::cout << "x = " << -coef_c / coef_b;
        }
    }
    else if (coef_b == 0) {
        if (coef_c == 0) {
            std::cout << "x = 0";
        }
        else if (coef_c < 0) {
            std::cout << "x = +-" << sqrt(-(coef_c / coef_a));
        }
        else {
            std::cout << "No solution.";
        }
    }
    else if (coef_c == 0) {
        x1 = 0;
        x2 = -coef_b / coef_a;
        std::cout << "x1 = " << x1 << ", x2 = " << x2;
    }
    else {
        double D;
        D = coef_b * coef_b - 4 * coef_a * coef_c;
        if (D >= 0) {
            x1 = (-coef_b + sqrt(D)) / (2 * coef_a);
            x2 = (-coef_b - sqrt(D)) / (2 * coef_a);
            if (x1 == x2) {
                std::cout << "x1 = x2 = " << x1;
            }
            else {
                std::cout << "x1 = " << x1 << ", x2 = " << x2;
            }
        }
        else {
            std::cout << "No solution.";
        }
    }

    return 0;
}
