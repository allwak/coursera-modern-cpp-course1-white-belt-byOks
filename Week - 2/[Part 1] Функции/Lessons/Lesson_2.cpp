#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>
using namespace std;

void PrintWords(vector<string> words) {
    for(auto w: words){
        cout << w << " " << endl;
    }
}

void ChangeInt(int x) {
    x = 42;
}

int main() {
    PrintWords({"air","water", "fire"});
    // air water fire

    int a = 4;
    ChangeInt(a);
    cout << a;
    // 4 

    return 0;
}

