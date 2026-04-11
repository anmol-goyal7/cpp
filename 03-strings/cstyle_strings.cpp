#include<iostream>
#include<cstring>

int main() {
	char name[8] = "Anmol";

std::cout << "Name: " << name << '\n';

// difference btw sizeof and strlen

std::cout << "sizeof(name): " << sizeof(name) << '\n';
std::cout << "strlen(name): " << std::strlen(name) << '\n';

char manual[5];
	manual[0] = 'T';
	manual[1] = 'e';
        manual[2] = 's';
        manual[3] = 't';
        manual[4] = '\0';

std::cout << "Manual string: " << manual << '\n';

char small[4] = "Hi";
std::cout << "Small: " << small << '\n';

return 0;
}
