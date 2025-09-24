#include <iostream>

int main() {
    short A;
    short B;

    std::cout << "First side: ";
    std::cin >> A;

    std::cout << "Second side: ";
    std::cin >> B;

    std::cout << "P = ";
    std::cout << (A + B)*2 << std::endl;
    return 0;
}