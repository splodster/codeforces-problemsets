// 58A - Chat room - Difficulty: 1000

#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    string s;
    cin >> s;
    string hello = "hello";

    if (s.length() < 5) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0, j = 0; i < s.length(); i++) {
        if (s[i] == hello[j]) {
            j++;
            if (j == 5) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
