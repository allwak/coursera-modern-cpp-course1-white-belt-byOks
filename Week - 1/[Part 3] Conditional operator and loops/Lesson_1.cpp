#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int a = 3;
    int b = 5;
    if (a < b) {
        cout << "a is less than b" << endl; // a is less than b
    }

    string string1 = "fire";
    string string2 = "water";
    string string3 = "fog";

    if (string1 < string2) {
        cout << "string1 is less than string2" << endl; // string1 is less than string2
    }
    if (string1 == string3) {
        cout << "string1 is equal to string3" << endl; 
    } else {
        cout << "string1 is not equal to string3" << endl; 
    }
    // string1 is not equal to string3

    vector<string> strings_vec_1 = {"fire", "water"};
    vector<string> strings_vec_2 = {"fog", "air"};

    if (strings_vec_1 == strings_vec_2) {
        cout << "strings_vec_1 is equal to strings_vec_2" << endl; 
    } else {
        cout << "strings_vec_1 is not equal to strings_vec_2" << endl; 
    }
    // strings_vec_1 is not equal to strings_vec_2

    map<string, int> dict1;
    dict1["one"] = 1;
    map<string,int> dict2;

    if (dict1 == dict2) {
        cout << "dict1 is equal to dict2" << endl; 
    } else {
        cout << "dict1 is not equal to dict2" << endl; 
    }
    // dict1 is not equal to dict2

    string s = "abc";
    if (!s.empty() && s < "zzz") {
        cout << s << endl;
    }
    // abc

    if (!s.empty() || s < "zzz") {
        cout << s << endl;
    }
    // abc

    return 0;
}