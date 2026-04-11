#include<iostream>
using namespace std;

int max_of_four(int n1, int n2, int n3, int n4);
int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    int result = max_of_four(n1,n2,n3,n4);

    cout << result << '\n';

    return 0;
}

int max_of_four(int n1, int n2, int n3, int n4)
{
    int max = n1;

    if (n1<n2) {
        max = n2;
    }

    if (n2<n3) {
        max = n3;
    }

    if (n3<n4) {
        max = n4;
    }

    return max;
}

     
