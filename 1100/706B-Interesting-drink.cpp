// 706B - Interesting drink - difficulty: 1100

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, q, m, shops;
  cin >> n; // the total number of shops
  int x[n]; // the cost in each shop
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  cin >> q; // the number of days
  sort(x, x + n);

  while (q--) { // iterate through the number of days
    cin >> m;
    shops = upper_bound(x, x + n, m) -
            x; // upper_bound returns the position of next greatest value bigger
               // than or equal to m in the array. i.e the number of shops
    cout << shops << endl;
  }

  return 0;
}
