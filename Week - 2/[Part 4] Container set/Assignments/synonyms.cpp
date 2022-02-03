#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void ADD(const string& word1, const string& word2, set<set<string>>& synonyms_db, map<string, int>& word_occurencies) {
    const set<string> words = {word1, word2};
    if (synonyms_db.count(words) == 0) {
        synonyms_db.insert(words);
        word_occurencies[word1] += 1;
        word_occurencies[word2] += 1;
    }
}

int COUNT(const string& word, map<string, int>& word_occurencies) {
    return word_occurencies[word];
}

string CHECK(const string& word1, const string& word2, const set<set<string>>& synonyms_db) {
    
    const set<string> words = {word1, word2};
    if (synonyms_db.count(words) == 1) {
        return "YES";
    } else {
        return "NO";
    }
    
}

int main() {
    int q;
    cin >> q;

    set<set<string>> synonyms_db;
    map<string, int> word_occurencies;
    
    for (int i = 0; i < q; i++) {
        string CMD;
        cin >> CMD;

        if (CMD == "ADD") {
            string word1, word2;
            cin >> word1 >> word2;
            ADD(word1, word2, synonyms_db, word_occurencies);
        } else if (CMD == "COUNT") {
            string word;
            cin >> word;
            cout << COUNT(word, word_occurencies) << endl;
        } else if (CMD == "CHECK") {
            string word1, word2;
            cin >> word1 >> word2;
            cout << CHECK(word1, word2, synonyms_db) << endl;
        }
    }

    return 0;
}

