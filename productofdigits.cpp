#include <iostream>
using namespace std;
int main()
{
    int n, r = 1;
    cin >> n;
    while (n > 0)
    {
        r = r * (n % 10);
        n = n / 10;
    }
    cout << r;
}