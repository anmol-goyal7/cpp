#include<iostream>
int sum(int x, int y);
int difference(int x, int y);
int product(int x, int y);
int quotient(int x, int y);

int main() 
{
	int n1{}, n2{};

	std::cout << "Enter a number" << '\n';
	std::cin >> n1;
	
	std::cout << "Enter another number" << '\n';
	std::cin >> n2;
	
	std::cout << "Sum: " << sum(n1,n2) << '\n';
	std::cout << "Difference: " << difference(n1,n2) << '\n';
	std::cout << "Product: " << product(n1,n2) << '\n';
	std::cout << "Quotient: " << quotient(n1,n2) << '\n';	
return 0;
}

int sum(int x, int y)
{
	return x + y;
}
int difference(int x, int y)
{
	return x - y;
}
int product(int x, int y)
{
	return x*y;
}
int quotient(int x, int y)
{
	return x/y;
}
	
	


