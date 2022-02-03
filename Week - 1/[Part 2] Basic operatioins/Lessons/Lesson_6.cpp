#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int a = 11;
    int b = 3;
    cout << a/b << endl;
    // 3

    int c = 11;
    double d = 3;
    cout << c/d << endl;
    // 3.667
    
    int x = 5; 
    x += 2;
    x -= 2;
    x /= 2;
    x *= 2;
    cout << x << endl;
    // 5

    int f = 5;
    f++;
    cout << f << endl; 
    // f = 6

    int m = f++;
    int n = ++f;
    cout << "m = " << m << endl; // m = 6
    cout << "n = " << n << endl; // n = 8

    return 0;
}