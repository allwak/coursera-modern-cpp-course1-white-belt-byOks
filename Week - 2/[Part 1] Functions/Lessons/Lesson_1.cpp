#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

bool Contains(vector<string> words, string w) {
    for(auto s: words) {
        if (s == w) {
            return true;
        }
    }
    return false;
}

int Sum(int x, int y) {
    return x + y;
}

int main() {
    int x = 5, y = 4;
    cout << Sum(x,y) << endl;
    // 9

    cout << Contains({"air","water", "fire"}, "fire");
    // 1 (True)
    
    return 0;
}

