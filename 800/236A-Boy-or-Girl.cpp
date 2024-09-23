// 236A - Boy or Girl - Difficulty: 800

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    string s; 
    int count(0);

    cin >> s;

    sort(&s[0], &s[s.length()]); // Sort the string using reference of the first and last element

    for (int i = 0; i < s.length(); i++) {
        if(s[i] != s[i+1]) {
            count++;
        } 
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
        return 0;
    } else {
        cout << "IGNORE HIM!";
        return 0;
    }

}
