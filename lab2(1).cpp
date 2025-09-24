#include <iostream>
#include <iomanip> 

int main() {
    double x;
    double y;
    int z;

    std::cout << "First number: ";
    std::cin >> x;

    std::cout << "Second number: ";
    std::cin >> y;

    std::cout << "Decimal places: ";
    std::cin >> z;

    std::cout << std::fixed << std::setprecision(z);
    std::cout << "Result: " << x*y << std::endl;

    return 0;
}