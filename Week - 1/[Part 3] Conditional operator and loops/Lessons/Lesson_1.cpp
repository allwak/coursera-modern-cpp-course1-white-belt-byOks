#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct Person {
    string name;
    string surname;
    int age;
};

int main() {

    int x = -5;
    double pi = 3.14;
    bool logical_value = false;
    char symbol = 'Z';
    
    string hw = "Hello, World!";

    vector<int> nums = {1, 3, 5, 7};
    cout << nums.size() << "\n";
    // 4

    map<string, int> name_to_value;
    name_to_value["one"] = 1;
    name_to_value["two"] = 2;

    cout << "two is " << name_to_value["two"] << "\n";
    // two is 2

    vector<Person> staff; 
    staff.push_back({"Ivan", "Ivanov", 25});
    staff.push_back({"Petr", "Petrov", 32});

    cout << staff[0].name << "\n";
    // Ivan

    return 0;
}

