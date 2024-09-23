// 231A - Team - Difficulty: 800

#include <iostream>

using  namespace std;

int main () {
    int n, Petya, Vasya, Tonya, sum(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
       cin >> Petya >> Vasya >> Tonya; 

       if (Petya + Vasya + Tonya > 1) {
           sum++;
       }
    }

    cout << sum;
    
    return 0;
}
