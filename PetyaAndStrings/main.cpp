#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    int cont_str1 = 0, cont_str2 = 0;
    if (str1.length() == str2.length()){
        for (int i = 0; i < str1.length(); i++){
            if (str1[i] == str2[i]){
                continue;
            }
            else if (str1[i] > str2[i]){
                cont_str1++;
                break;
            }
            else {
                cont_str2++;
                break;
            }
        }
        if (cont_str1 == cont_str2){
            cout << "0";
        }
        else if (cont_str1 > cont_str2){
            cout << "1";
        }
        else {
            cout << "-1";
        }
    }
    return 0;
}
