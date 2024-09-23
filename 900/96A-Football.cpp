// 96A - Football - Difficulty: 900

#include <iostream>

using namespace std;

int main() {
  string s;
  int count(0);

  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1]) {
      count++;
      if (count == 6) {
        cout << "YES" << endl;
        return 0;
        break;
      }
    } else
      count = 0;
  }
  if (count < 6)
    cout << "NO" << endl;
  return 0;
}
