#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <chrono>
using namespace std;
using namespace std::chrono;

void AddWorld(string s) {
    s += " world";
}

void AddWorldVersion2(string& s) {
    s += " world";
}

void Swap(string& a, string& b) {
    auto tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (string& s : v) {
        cin >> s;
    }

    return 0;
}

