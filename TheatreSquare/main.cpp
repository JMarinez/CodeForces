#include <iostream>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;
    long long cantidad = x * y;
    cout << cantidad << endl;
    return 0;
}
