#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int A,B;
    cin >> A >> B;

    while (A != 0 && B != 0) {
        if (A > B) {
            A = A % B;
        } else {
            B = B % A;
        }
    }
    
    cout << A + B << endl;

    return 0;
}