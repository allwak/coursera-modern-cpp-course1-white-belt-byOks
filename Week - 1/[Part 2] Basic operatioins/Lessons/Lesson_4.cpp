#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int x = 4;
    int y = 5;

    if (x == y) {
        cout << "equal";
    } else {
        cout << "not equal" << endl;
    }
    // not equal

    int n = 5;
    int sum = 0;

    int i = 1;
    while (i <= n) {
        sum += i;
        i++; 
    }

    cout << "sum = " << sum << endl;
    sum = 0;
    // sum = 15

    for (int i = 1; i <= n; ++i) {
        sum += i ;
    }

    cout << "sum = " << sum << endl;
    // sum = 15

    return 0;
}