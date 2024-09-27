// 579A - Raising Bacteria - difficulty: 1000

#include <iostream>

using namespace std;

int main() {
  long int x, bacteria(1);
  cin >> x; // the number of bacteria at the end

  while (x > 1) {
    if (x % 2 == 0) // if the number is even, reduce x by half
      x = x / 2;
    else { // if number of bacteria is odd, decrement the number
      x--;
      bacteria++; // then increment the number of min bacteria.
    }
  }

  cout << bacteria;
}
