#include <iostream>

namespace Foo::Goo
{
int add(int x, int y)
{
return x + y;
}
}

namespace Foo{
void someFcn() {}
}

int main()
{
std::cout << Foo::Goo::add(1,2) << '\n';
return 0;
}
