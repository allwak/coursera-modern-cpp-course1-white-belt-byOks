#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    
    if (s1 <= s2 && s1 <= s3) {
        cout << s1;
    } else if (s2 <= s1 && s2 <= s3) {
        cout << s2;
    } else if (s3 <= s1 && s3 <= s2) {
        cout << s3;
    }

    return 0;
}