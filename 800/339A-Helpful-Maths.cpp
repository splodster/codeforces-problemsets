// 339A - Helpful Maths - Difficulty: 800

#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    string s;
    int array[100], count(0);
     
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            array[count] = s[i] - '0'; // convert char to int
            count++;
        }
    }

    sort(array, array + count); //sort the array, from the first element to one beyond the count'th element
    
    for (int i = 0; i < count; i++) {
        cout << array[i];
        if (i == count - 1) {
            break;
        }
        cout << "+";
    }
    return 0;
}
