#include <iostream>

using namespace std;

int main()
{
    string str;
    int one = 0;
    int zero = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '1'){
            one++;
            zero = 0;
        }
        else if (str[i] == '0'){
            zero++;
            one = 0;
        }
        if (one == 7 || zero == 7){
            break;
        }
    }
    if (one >= 7 || zero >= 7){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;

}
