#include <iostream>

using namespace std;

int main()
{
    int w, w1, w2;
    cin >> w;
    if ((w >= 1 && w <= 100) && (w % 2 == 0)){
        w1 = w / 2;
        w2 = w1;
        if (w1 % 2 == 0 && w2 % 2 == 0){
            cout << "YES";
        }
        else if (w1 >= 3){
            w1 = w1 + 1;
            w2 = w2 - 1;
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
    return 0;
}
