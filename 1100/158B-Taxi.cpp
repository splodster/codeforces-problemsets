// 158B - Taxi - Difficulty: 1100

#include <iostream>

using namespace std;

int main() {
  int n, s, total(0);
  cin >> n;

  if (n == 1) {
    cout << 1;
    return 0;
  }

  int count[5] = {0};
  for (int i = 0; i < n; i++) {
    cin >> s;
    count[s]++; // increase either of the 4 indexes based on the number of
                // kids in the group
  }
  total = count[4] + count[3] + count[2] / 2;
  // the number of cars before individual kids are accounted for
  count[1] -= count[3];    //
  if (count[2] % 2 == 1) { // if there are odd number of two man groups
    total += 1;
    count[1] -= 2; // take 2 single to accomadate that 2 man
  }
  if (count[1] > 0) {
    total += (count[1] + 3) / 4;
    // add 3 to remaining individuals to make them divisible or roundable up
  }

  cout << total;
  return 0;
}
