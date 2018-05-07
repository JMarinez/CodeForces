#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int x = 0;
    for (int i = 0; i < str.length(); i = i + 2){
        x++;
    }
    vector<char> sum;
    for (int i = 0; i < str.length(); i = i + 2){
        sum.push_back(str[i]);
    }
    for (int i = 0; i < x - 1; i++){
        for (int j = i + 1; j < x; j++){
            if (sum[i] > sum[j]){
                char aux = sum[i];
                sum[i] = sum[j];
                sum[j] = aux;
            }
        }
    }
    for (int i = 0; i < sum.size(); i++){
        if (i == sum.size() - 1){
            cout << sum[i];
        }
        else{
            cout << sum[i] << '+';
        }
    }
    return 0;
}
