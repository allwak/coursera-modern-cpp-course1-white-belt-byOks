#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void NewBus(int n, map<vector<string>, int>& bus_routes_db) {

    vector<string> temp_bus_route;
    for (int i = 0; i < n; i++) {
        string bus_stop;
        cin >> bus_stop;
        temp_bus_route.push_back(bus_stop);
    }

    if (bus_routes_db.count(temp_bus_route) == 1) {
        int bus_number = bus_routes_db[temp_bus_route];
        cout << "Already exists for " << bus_number << endl;
    } else {
        int current_bus = bus_routes_db.size() + 1;
        bus_routes_db[temp_bus_route] = current_bus;
        cout << "New bus " << current_bus << endl;
    }

}

int main() {
    int q;
    cin >> q;

    map<vector<string>, int> bus_routes_db;

    for (int i = 0; i < q; i++) {
        int bus_stops;
        cin >> bus_stops;
        NewBus(bus_stops, bus_routes_db);
    }
    return 0;
}

// 4
// 2 Marushkino Kokoshkino
// 1 Kokoshkino
// 2 Marushkino Kokoshkino
// 2 Kokoshkino Marushkino

// New bus 1
// New bus 2
// Already exists for 1
// New bus 3