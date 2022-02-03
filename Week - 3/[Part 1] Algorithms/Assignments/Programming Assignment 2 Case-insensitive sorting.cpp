#include <iostream>
#include <vector>
#include <algorithm>
#include <locale>  

using namespace std;

void PrintVector(const vector<string>& v) {
    for (auto i: v) {
        cout << i << " ";
    }
}

string get_lower(string str) {
    for(auto& c : str) {
        c = tolower(c);
    }
    return str;
}

int main() {
    int N;
    cin >> N;

    vector<string> words;
    
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    sort(words.begin(), words.end(), [](string& x, string& y) {
        return get_lower(x) < get_lower(y);
    });

    PrintVector(words);


    return 0;
}