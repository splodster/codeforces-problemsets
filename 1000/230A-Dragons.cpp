// 230A - Dragons - Difficulty: 1000

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int s, n; // s is initial strength, n is number of dragons
  cin >> s >> n;
  int x[n], y[n];
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (x[i] > x[j]) { // push bigger values to the tail of array in parallel
        swap(x[i], x[j]);
        swap(y[i], y[j]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (s > x[i])
      s += y[i];
    else {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
