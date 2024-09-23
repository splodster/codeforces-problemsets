// 266A - Stones on the Table - Difficulty: 800

#include <iostream>

using namespace std;

int main () {
    int n, count(0);
    string s;

    cin >> n >> s;
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
       if (s[i] == s[i+1]) {
           count++;
       }
    }

    cout << count << endl;

    return 0;
}
