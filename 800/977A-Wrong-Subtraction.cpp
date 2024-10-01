#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    if (n % 5 == 0)
      n /= 10;
    else
      n--;
  }

  cout << n;
  return 0;
}
