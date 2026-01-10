#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int maxEscape = (n * n + 1) / 2;
        if (k > maxEscape) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        vector<string> grid(n, string(n, 'R')); // default

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j) % 2 == 0 && k > 0) {
                    grid[i][j] = 'U';
                    k--;
                } else {
                    // fill loop directions
                    if (i % 2 == 0) grid[i][j] = 'R';
                    else grid[i][j] = 'L';
                }
            }
        }

        for (auto &row : grid) cout << row << "\n";
    }
}
