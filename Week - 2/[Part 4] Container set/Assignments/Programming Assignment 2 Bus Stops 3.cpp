#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int q;
    cin >> q;

    map<set<string>, int> bus_stops_db;
    
    for (int i = 0; i < q; i++) {

        int bus_stops_number;
        cin >> bus_stops_number;
        set<string> temp_route;
        
        for (int j = 0; j < bus_stops_number; j++) {
            string bus_stop_name;
            cin >> bus_stop_name;
            temp_route.insert(bus_stop_name);
        }

        if (bus_stops_db.count(temp_route) == 1) {
            cout << "Already exists for " << bus_stops_db[temp_route] << endl;
        } else {
            const int current_bus_route = bus_stops_db.size() + 1;
            bus_stops_db[temp_route] = current_bus_route;
            cout << "New bus " << current_bus_route << endl;
        }

    }

    return 0;
}
