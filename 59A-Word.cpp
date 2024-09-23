// 59A - Word - Difficulty: 800

#include <iostream>

using namespace std;

int main () {
    int upper(0), lower(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            upper++;
        }
        else
            lower++;
    }
    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 97 && s[i] <= 122) {
                s[i] = s[i] - 32;
            }
        }
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}
