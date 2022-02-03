#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> 

using namespace std;

void PrintVector(const vector<int>& v, const string& title) {
    cout << title << ": ";
    for (auto i: v) {
        cout << i << " ";
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> numbers;
    
    for (int i = 0; i < N; i++) {
        int number;
        cin >> number;
        numbers.push_back(number);
    }

    PrintVector(numbers, "initial");
    cout << endl;

    sort(numbers.begin(), numbers.end(), [](int x, int y) {
        return (abs(x) < abs(y));
    });

    PrintVector(numbers, "sorted");


    return 0;
}