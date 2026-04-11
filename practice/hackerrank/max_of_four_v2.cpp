#include <iostream>

int max_of_four(int a, int b, int c, int d) {
    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    if (d > mx) mx = d;
    return mx;
}

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    std::cout << max_of_four(a,b,c,d) << '\n';

    return 0;
}
