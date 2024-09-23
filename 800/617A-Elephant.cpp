// 617A - Elephant - Difficulty: 800

#include <iostream>

using namespace std;

int main () {
    int x;

    cin >> x;

    if (x % 5 == 0) {
        cout << x/5 << endl;
        return 0;
    }
    else {
        while(x % 5 != 0) {
            x++;
        }
        cout << x/5 << endl;
    }
}


