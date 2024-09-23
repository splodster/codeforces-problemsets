// 160A - Twins - Difficulty: 900

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, amt(0), temp(0), a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    amt += a[i];
  }
  sort(a, a+n, greater<int>());
  for (int i = 0; i < n; i++) {
    temp += a[i];
    if (temp > amt / 2) {
        cout << i + 1;
        return 0;
    }
  }
}
