#include <iostream>
#include <locale>
using namespace std;

int main()
{
    locale loc;
    char minuscula[6] = {'a', 'e', 'i', 'o', 'u', 'y'};
    char mayuscula[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++){
        int x = 0;
        for (int j = 0; j < 6; j++){
            if (str[i] == minuscula[j] || str[i] == mayuscula[j]){
                x++;
            }
        }
        if (x > 0){
            continue;
        }
        cout << "." << tolower(str[i], loc);
    }
    return 0;
}
