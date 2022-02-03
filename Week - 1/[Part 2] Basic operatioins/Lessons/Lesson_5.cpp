#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s = "hello";
    string t = s;

    t += ", world";
    cout << "s = " << s << endl; // s = hello
    cout << "t = " << t << endl; // t = hello, world

    vector<string> w = {"a", "b", "c"};
    vector<string> v;

    v = w;
    v[0] = "d";

    cout << w[0] << " " << w[1] << endl; // a b
    cout << v[0] << " " << v[1] << endl; // d b

    return 0;
}