#include<iostream>

namespace math {
int add(int a, int b) 
{ return a+b; } 
}

int main() {
std::cout << math::add(5, 3) << '\n' ;
return 0;
}
