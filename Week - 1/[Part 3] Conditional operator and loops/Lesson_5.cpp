#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    string s = "sdfasdfasdf";

    for(int j = 0; j < s.size(); ++j) {
        if (s[j] == 'a') {
            cout << j << endl;
            break;
        }
    } 
    // 3
    
    cout << "It was the number of the first a-element" << endl;

    return 0;
}