#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        if (str == "X++" || str == "++X" || str == "++x" || str == "x++"){
            x++;
        }
        else if (str == "X--" || str == "--X" || str == "--x" || str == "x--"){
            x--;
        }
    }
    cout << x;
    return 0;
}
