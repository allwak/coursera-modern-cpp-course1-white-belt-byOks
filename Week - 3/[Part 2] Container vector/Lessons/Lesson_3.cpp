#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <chrono>
using namespace std;
using namespace std::chrono;

void PrintVector(const vector<bool>& v) {
    int i = 1;
    for (auto x : v) {
        cout << i << " : " << x << endl;
        ++i;
    }
}

int main() {
    vector<int> days_in_months = {31, 28, 31, 30, 31};
    vector<bool> is_holiday(28, false);
    is_holiday[22] = true;

    is_holiday.resize(31);
    PrintVector(is_holiday); // 23rd February : true

    is_holiday.assign(31, false);
    is_holiday[7] = true;
    PrintVector(is_holiday); // 8th March : true

    if (true) { // if a year is leap
        days_in_months[1]++;
    }

    //PrintVector(days_in_months);

    return 0;
}

