#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> x;


    while (N > 0) {
        if (N % 2 == 0) {
            x.push_back(0);
        } else {
            x.push_back(1);
        }
        N /= 2;
    }

    reverse(begin(x), end(x));
    for(auto i: x) {
        cout << i;
    }

    return 0;
}