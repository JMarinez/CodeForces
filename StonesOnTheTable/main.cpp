#include <iostream>
using namespace std;

int main()
{
    string stone;
    int n = 0;
    cin >> n;
    int neighbor = 0;
    cin >> stone;
    for (int i = 0; i < stone.length(); i++){
        if (i == stone.length()- 1){
            break;
        }
        if (stone[i] == stone[i + 1]){
            neighbor++;
        }
    }
    cout << neighbor;
    return 0;
}
