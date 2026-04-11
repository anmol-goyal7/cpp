#include <iostream>

int main() {
    int row{1};

    while (row <= 5) {
        int n{row};

        while (n >= 1) {
            std::cout << n << ' ';
            --n;
        }

        std::cout << '\n'; 
        ++row;            
    }

    return 0;
}

