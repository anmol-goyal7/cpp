#include <iostream>

int main() {
    int a = 5;        // copy initialization
    int b(6);         // direct initialization
    int c{7};         // brace initialization (preferred)

    std::cout << a << ' ' << b << ' ' << c << '\n';

    // int d{3.5};    // narrowing conversion (compile-time error)

    return 0;
}

