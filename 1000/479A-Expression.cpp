
// 479A - Expression - Difficulty : 1000

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int a, b, c, result;
  cin >> a >> b >> c;
    result = a + b + c;
    result = max(result, (a * b * c));
    result = max(result, (a + b) * c);
    result = max(result, a * (b + c));
    result = max(result, a + (b * c));
    result = max(result, (a * b) + c);

    cout << result;
  return 0;
}
