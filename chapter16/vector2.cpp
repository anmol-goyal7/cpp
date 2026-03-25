#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> a(5,10);

    for ( int num : a) {
        std::cout << num;
    }
    
    std::cout << '\n';
    int b{};

    for ( int num : a) {
        b = b+num;    
    }

    std::cout << b << '\n';
    a.pop_back();
    a.pop_back();
   
    for ( int num : a) {
        b = b+num;    
    }
    
    std::cout << b << '\n';
    return 0;
}   

