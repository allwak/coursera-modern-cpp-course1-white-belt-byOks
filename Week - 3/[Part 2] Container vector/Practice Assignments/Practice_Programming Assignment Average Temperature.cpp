#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

void PrintVector(const vector<int>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    int avg_tmp = 0;

    for (int& x: v){
        cin >> x;
        avg_tmp += x;
    }

    avg_tmp = avg_tmp / N;
    
    vector<int> tmp_day_numbers;

    for(int i = 0; i < N; i++) {
        if (v[i] > avg_tmp) {         
            tmp_day_numbers.push_back(i);
        }
    }

    cout << tmp_day_numbers.size() << endl;
    PrintVector(tmp_day_numbers);

    return 0;
}