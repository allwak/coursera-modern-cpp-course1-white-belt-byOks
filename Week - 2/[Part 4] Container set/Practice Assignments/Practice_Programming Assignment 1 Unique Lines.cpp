#include <iostream>
#include <set>
#include <string>

using namespace std;


int main() {
    int N;
    cin >> N;

    set <string> words;

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        words.insert(word);
    }

    cout << words.size() << endl;;
    return 0;
}

