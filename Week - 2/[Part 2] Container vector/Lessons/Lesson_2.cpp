#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <chrono>
using namespace std;
using namespace std::chrono;

void PrintVector(const vector<string>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (string& s : v) {
        cin >> s;
    }

    /* 2nd option:
     *
     * vector<string> v;
     * int i = 0;
     * while (i < n) {
     *  string s;
     *  cin >> s;
     *  v.push_back(s);
     *  ++i;
     * }
     *
     */
    
    PrintVector(v);



    return 0;
}

