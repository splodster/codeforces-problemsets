// 318A - Even Odds - Difficulty: 900

#include <iostream>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  if (n % 2 == 0) { // when n is even
    if (k <= n / 2) // if the position is less than or equal to half of n
      cout << 2 * k - 1 << endl;
    else
      cout << (k - n / 2) * 2 << endl;
  } else if (k <= n / 2 + 1)
    cout << 2 * k - 1 << endl;
  else
    cout << (k - n / 2 - 1) * 2 << endl;

  return 0;
}
