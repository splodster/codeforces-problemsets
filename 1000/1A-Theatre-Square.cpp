// 1A - Theatre Square - Difficulty: 1000

#include <iostream>

using namespace std;

int main () {
    int n , m; // n x m is the square area
    long a; // flagstone size is a^2

    cin >> n >> m >> a;

    long long x = n / a; // number of flagstones in x direction
    if (n % a != 0) // if there is a remainder, add one more flagstone
        x++;
    long long y = m / a; // number of flagstones in y direction
    if (m % a != 0) 
        y++;

    cout << x * y << endl;

    return 0;
}
