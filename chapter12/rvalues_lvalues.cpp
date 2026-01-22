#include <iostream>
int main() {
    int x {5};
    const int& ref { x };

    std::cout << ref << '\n';
    ref = 7; //error: cannot modify an object through const reference

    x = 6;

    return 0;
}
