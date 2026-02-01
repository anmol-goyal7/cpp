#include <iostream>
int main()
{
    int n;

    std::cin >> n;
    
    int array[n];

    for (int i = 0; i < n; i++)
    {   
        std::cin >> array[i];
    }

    for (int j = n-1; j >= 0; j--)
    {
        std::cout << array[j] << " ";
    }
    
    std::cout << '\n';
    return 0;
}

