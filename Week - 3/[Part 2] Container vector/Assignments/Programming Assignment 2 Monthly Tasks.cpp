#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void PrintVector(const vector<string>& v) {
    cout << v.size() << " ";
    for (auto s : v) {
        cout << s << " ";
    }
    cout << endl;
}

int main() {
    vector<char> v;
    // true = worried
    // false = quiet
    map<int, vector<string>> activities;
    map<int, int> month_days = { {1,31}, {2,28}, {3,31}, {4,30}, {5,31}, {6,30}, {7,31}, {8,31}, {9,30}, {10,31}, {11,30}, {12,30}};
    int current_month = 1; // #1
    int Q;
    cin >> Q;
    for(int i = 1; i <= Q; ++i) {
        int day;
        string activity;
        string cmd;
        cin >> cmd;
        vector<string> act_30 = activities[30];
        vector<string> act_31 = activities[31];

        if (cmd == "ADD") {
            cin >> day;
            cin >> activity;
            activities[day].push_back(activity);
        } else if (cmd == "NEXT") {
            if (current_month == 12) {
                current_month = 0;
            }
            ++current_month;
            if (current_month != 12 && (month_days[current_month] < month_days[current_month+1])) {

                if(month_days[current_month] > 28) {
                    activities[31].clear();
                    activities[30].insert(end(activities[30]), begin(act_31), end(act_31));
                } else if(month_days[current_month] == 28) {
                    activities[31].clear();
                    activities[30].clear();
                    if(activities[28].size() > 0) {
                        activities[28].insert(end(activities[30]), begin(act_30), end(act_30));
                        activities[28].insert(end(activities[28]), begin(act_31), end(act_31));
                    } else {
                        activities[28] = act_30;
                        activities[28].insert(end(activities[28]), begin(act_31), end(act_31));
                    }
                }
            }
        } else if (cmd == "DUMP") {
            cin >> day;

            PrintVector(activities[day]);
        }

    }
    return 0;
}