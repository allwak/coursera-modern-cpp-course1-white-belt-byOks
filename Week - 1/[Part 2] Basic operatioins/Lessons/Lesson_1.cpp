#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "abc"; 
    string b = "def";

    if (a != b) {
        cout << "not equal" << "\n";
    } else {
        cout << "equal" << "\n";
    }
    // not equal

    if (a < b) {
        cout << "less" << "\n";
    } else {
        cout << "not less" << "\n";
    }
    // less
    
    int x = 4; 
    int y = 5;

    cout << (x+y) * (x-y) << "\n";
    // -9

    if (x == y) {
        cout << "equal";
    } else {
        cout << "not equal";
    }
    // not equal

    return 0;
}

