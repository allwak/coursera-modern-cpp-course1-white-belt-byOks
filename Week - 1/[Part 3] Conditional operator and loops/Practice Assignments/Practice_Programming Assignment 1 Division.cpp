#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    if (B == 0) {
        cout << "Impossible" << endl;
    } else {
        cout << A / B << endl;
    }

    return 0;
}