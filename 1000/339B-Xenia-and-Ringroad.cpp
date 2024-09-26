// 339B - Xenia and Ringroad - Difficulty: 1000

#include <iostream>

using namespace std;

int main() {
  int n, m;
  long long int result(0); // n is number of houses, m is number of tasks and a
                           // is the order of the houses
  cin >> n >> m;

  int pos(1);
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    if (a >= pos)
      result += a - pos;
    else
      result += n - (pos - a);
    pos = a;
  }

  cout << result;

  return 0;
}
