// 546A - Soldier and Bananas - Difficulty: 800

#include <iostream>

using namespace std;

int main() {
  int k, w, n, cost(0);
  // k is cost of 1st banana
  // w is no. of bananas
  // n is initial $ soldier has
  cin >> k >> n >> w;
  if (w > 1) {
    for (int i = 1; i <= w; i++) {
      cost += i * k;
    }
  } else {
    cout << 0;
    return 0;
  }
  if (cost > n)
    cout << cost - n;
  else
    cout << 0;

  return 0;
}
