#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void Swap(int& x, int& y) {
    int tmp = x;
    x = y;
    y = tmp;
}

/*
vector<int> Sort(vector<int> v) {
    sort(begin(v),end(v));
    return v;
}
*/ 

void Sort(vector<int>& v) {
    sort(begin(v),end(v));
}

int main() {
    
    int a = 4;
    int b = 5;
    Swap(a,b);
    cout << "a = " << a << endl; // a = 5
    cout << "b = " << b << endl; // b = 4
    // 4 

    vector<int> nums = {3, 6, 1, 2, 0, 2};
    Sort(nums);
    for(auto x: nums) {
        cout << x << " ";
    }
    // 0 1 2 2 3 6 


    return 0;
}

