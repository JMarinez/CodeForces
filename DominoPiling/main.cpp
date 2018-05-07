#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m == 2 || n == 2){
        if (n == 2){
            cout << m;
        }
        else{
            cout << n;
        }
    }
    else if (m % 2 == 0 || n % 2 == 0){
        if (n % 2 == 0){
            cout << ((n/2) * m);
        }
        else{
            cout << ((m/2) * n);
        }
    }
    else{
        cout << (floor(n/2.00 * m));
    }
    return 0;
}
