#include <iostream>
int main()
{
    const double& r1 {5};

    std::cout << r1 << '\n';

    char c {'a'};
    const int& r2 { c };

    std::cout <<r2 << '\n';

    return 0;
}
