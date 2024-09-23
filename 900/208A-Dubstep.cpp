// 208A - Dubstep - Difficulty: 800

#include <iostream>

using namespace std;

int main() {
  bool inWord = false;
  string s, result;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      i += 2;
      if (inWord) {
        result.push_back(' ');
        inWord = false;
      }
    } else {
      result.push_back(s[i]);
      inWord = true;
    }
  }
  cout << result << endl;
  return 0;
}
