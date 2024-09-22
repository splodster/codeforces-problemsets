// 133A - HQ9+ - Difficulty: 900

#include <iostream>

using namespace std;

int main() {
  int yes = 0;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 33 && s[i] <= 126) {
      if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
        yes = 1;
      }
    }
  }
  if (yes == 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
