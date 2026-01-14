#include <iostream>

namespace Foo::Goo
{
}

namespace V2
{
int add(int x, int y)
{
return x + y;
}
}

int main()
{
	namespace Active = V2;
std::cout << Active::add(1,2) << '\n';

return 0;
}
