// 50A - Domino piling - Difficulty: 800

#include <iostream>

using namespace std;

int main () {
    int m, n, area;

    cin >> m >> n;

    area = m * n;

    if (area % 2 == 0) {
        cout << area / 2; // number is even, therefore divide by 2
    } else {
        cout << (area - 1) / 2; // if number is odd, subtract 1 and divide by 2
    }

    return 0;
}
