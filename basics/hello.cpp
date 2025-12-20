#include <iostream>
#include <limits>

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Sum = " << x + y << '\n';

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}

