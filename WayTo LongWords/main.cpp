#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    if ((n >= 1) && (n <= 100)){
        for (int i = 0; i < n; i++) {
            cin >> str;
            if (str.length() > 10) {
                cout << str[0] << str.length() - 2 << str.back() << "\n";
            }
            else {
                cout << str << "\n";
            }
        }
    }
}
