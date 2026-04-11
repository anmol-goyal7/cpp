#include<iostream>

int value = 5;
int main() {
	int value = 10;
std::cout << "Local value: " << value << '\n';
std::cout << "Global value: " << ::value << '\n';
return 0;
}



