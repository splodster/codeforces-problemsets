// 405A - Gravity Flip - Difficulty: 900

#include <algorithm>
#include <iostream>

using namespace std;

int main () {
    int n; //n is the number of columns in the box
    int a[n]; //a is the array of integers representing the number of cubes in each column
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
