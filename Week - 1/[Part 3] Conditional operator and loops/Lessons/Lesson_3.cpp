#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n = 3;
    int sum = 0;

    if (n >= 1) {
        while (n > 0) { 
            sum += n;
            --n;
        } 
        cout << sum;
    } else {
        cout << "Please, enter a positive number";
    }
    //6
    
    return 0;
}