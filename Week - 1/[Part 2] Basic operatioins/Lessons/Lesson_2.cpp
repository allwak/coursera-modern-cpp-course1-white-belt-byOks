#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "abcdefg";
    for (char c : s) {
        cout << c << ",";
    }
    // a,b,c,d,e,f,g,

    cout << endl;

    vector<int> nums = {1, 5, 2, 3, 5};
    int quantity = 0; 
    
    for (auto c : nums) {
        cout << c << ",";
        if (c == 5) {
            quantity++;
        }
    }
    // 1,5,2,3,5,
    // quantity = 2

    cout << endl;
    cout << "There are " << quantity << " fives" << endl;
    // There are 2 fives

    int quantity_new = count(begin(nums), end(nums), 5);
    cout << "There are " << quantity_new << " fives" << endl;
    // There are 2 fives

    sort(begin(nums), end(nums));
    for (auto x : nums) {
        cout << x << " ";
    }
    // 1 2 3 5 5 

    cout << endl;

    vector<string> strings = {"Hello", "World", "Milk"};
    sort(begin(strings), end(strings));
    for (auto x : strings) {
        cout << x << " ";
    }
    // Hello Milk World 

    return 0;
}

