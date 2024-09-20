// 50A - Domino piling - Difficulty: 800

#include <iostream>

using namespace std;

int abs(int x);

int main () {
    int m[5][5],i,j; // j - columns, i - rows

    for (i = 0; i < 5; i++) {
       for (j = 0; j < 5; j++) {
            cin >> m[i][j];
       } 
    }
    if (m[2][2]  == 1)
        cout << 0;
    else {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (m[i][j] == 1) {
                    cout << abs(i-2) + abs(j-2); // Manhattan distance
                    return 0;
                }
            }
        }
    }

    return 0;
}

int abs(int x) {
    return x < 0 ? -x : x; //return x if x is positive, else return -x
}
