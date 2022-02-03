#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;

    int k = 0;

    for(int i = 0; i < s.size(); i++) {
        if (s[i] == 'f'){
            k++;
        }
        if (k == 2) {
            cout << i << endl; 
            break;
        }
    }

    if (k == 0) {
        cout << -2 << endl;
    } else if (k == 1) {
        cout << -1 << endl;
    }

    return 0;
}