#include <iostream>

int main() {
    int age{};
    int year{};

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter current year: ";
    std::cin >> year;

    std::cout << "You were born in approximately "
              << (year - age) << ".\n";

    return 0;
}

