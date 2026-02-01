#include <iostream>
using namespace std;

int add(int *x, int *y);
int difference(int *x, int *y);

int main(){
    
    int x,y;
    cin >> x >> y;

    cout << add(&x, &y) << '\n';
    cout << difference(&x, &y) << '\n';

    return 0;
}

int add(int *x, int *y)
{
    return *x + *y;
}

int difference(int *x, int *y)
{
    int z{*x-*y};

    if(z<0)
    {
        z = -1 * z;
    }
    
    return z;
}
