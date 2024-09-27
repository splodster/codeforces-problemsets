// 43A - Football - Difficulty: 1000

#include <iostream>
using namespace std;

int main() {
  int n, g(0);
  cin >> n;

  string team, winner;

  for (int i = 0; i < n; i++) {
    if (g != 0) {
      cin >> team;
      if (team == winner)
        g++;
      else
        g--;
    } else {
      cin >> winner; // set the winner
      // then change the winner to a new team when the goals of the prev team
      // reach 0
      g = 1;
    }
  }
  cout << winner;
  return 0;
}
