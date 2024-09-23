// 71A - Way Too Long Words - Difficulty: 800

#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++) {
       cin >> s; 
       int l = s.length();

       if(l <=10)
           cout << s << endl;
       else
        cout << s.front() << l-2 << s.back() << endl;
    }


    return 0;
}
