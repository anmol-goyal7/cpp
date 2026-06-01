#include <iostream>
#include <stdexcept>
#include <string>

int main() 
{
    std::string first = "Hello";
    std::string second = "World";

    std::cout << "first length: " << first.length() << '\n';
    std::cout << "second size: " << second.size() << '\n';

    first += " ";
    first += second;

    std::cout << "Combined: " << first << '\n';

    std::cout << "First char: " << first[0] << '\n';

    try {
        std::cout << "Char at index 100: " << first.at(100) << '\n';
    } catch (const std::out_of_range& error) {
        std::cout << "Out of range: " << error.what() << '\n';
    }

    return 0;
}
