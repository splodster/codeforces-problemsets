// 131A - cAPS lOCK - Difficulty: 1000

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  bool flag = true;

  for(int i = 1; i < s.length(); i++) {
      if (islower(s[i]))
          flag = false;
  }


  if (flag) {
      for (int i = 0; i < s.length(); i++) {
          if (islower(s[i])) {
              s[i] = toupper(s[i]);
          } else {
              s[i] = tolower(s[i]);
          }
      }
      cout << s;
  }
  else 
    cout << s;

  return 0;
}
