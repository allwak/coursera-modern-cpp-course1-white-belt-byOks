#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

void Print(const vector<int>& v, const string& title) {
    cout << title << ": ";
    for (auto i: v) {
        cout << i << " ";
    }
}


int main() {
    string s1 = "abc";
    string s2 = "bca";

    cout << min(s1, s2) << endl; // abc ("a" < "b")
    cout << max(s1, s2) << endl; // bca ("b" > "a")

    vector<int> v {
        1, 3, 2, 5, 4
    };
    
    Print(v, "init");
    sort(begin(v), end(v));
    Print(v, "sort");

    return 0;
}

