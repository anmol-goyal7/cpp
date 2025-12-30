#include <iostream>
#include "math.h"
int main()
{
int n1{},n2{};
std::cout << "Enter a number: " << '\n';
std::cin >> n1;

std::cout << "Enter another number: " << '\n';
std::cin >> n2;

std::cout << "Sum: " << sum(n1,n2) << '\n';
std::cout << "Difference: " << difference(n1,n2) << '\n';
std::cout << "Product: " << product(n1,n2) << '\n';
std::cout << "Quotient: " << quotient(n1,n2) << '\n';

return 0;
}
