#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6; // controls the size of the heart

    // Upper part of heart
    for (int i = n/2; i <= n; i += 2) {
        // Left spaces
        for (int j = 1; j < n - i; j += 2) {
            cout << " ";
        }
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of heart
    for (int i = n; i >= 1; i--) {
        // Leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= (i * 2) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
