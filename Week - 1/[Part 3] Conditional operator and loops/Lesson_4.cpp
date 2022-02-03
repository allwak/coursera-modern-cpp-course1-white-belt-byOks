#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> a = {1, 4, 6, 8, 10};
    int sum = 0;

    for (auto i: a) {
         sum += i;
    }

    cout << sum << endl;
    // 29

    map<string,int> b = {{"a",1}, {"b",2}, {"c",3}};    
    sum = 0;
    string concat;

    for (auto i: b) {
         concat += i.first;
         sum += i.second;
    }

    cout << concat << endl; // abc
    cout << sum << endl; // 6

    string s = "asdfasdfasdf";
    int i = 0;
    
    for(auto a: s) {
        if (a == 'a') {
            cout << i << endl;
        }
        ++i;
    } 
    // 0 4 8

    for(int j = 0; j < s.size(); ++j) {
        if (s[j] == 'a') {
            cout << j << endl;
        }
    } 
    // 0 4 8

    return 0;
}