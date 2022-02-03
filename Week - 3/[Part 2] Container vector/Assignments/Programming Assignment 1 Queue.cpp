#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<char> v;
    // true = worried
    // false = quiet

    int Q;
    cin >> Q;
    for(int i = 1; i <= Q; ++i) {
        
        string cmd;
        cin >> cmd;

        if (cmd == "WORRY_COUNT") {
            cout << count(begin(v), end(v), true) << endl;
        } else if (cmd == "WORRY" || cmd == "QUIET") {
            int person_index;
            cin >> person_index;
            v[person_index] = (cmd == "WORRY");
        } else if (cmd == "COME") {
            int person_index;
            cin >> person_index;
            v.resize(v.size()+person_index);
        }

    }
    return 0;
}