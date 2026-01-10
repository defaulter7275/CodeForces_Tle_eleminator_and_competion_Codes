#include <bits/stdc++.h>
using namespace std;

bool possible(int x, int y, int z) {
    for (int bit = 0; bit < 31; ++bit) {
        int bx = (x >> bit) & 1;
        int by = (y >> bit) & 1;
        int bz = (z >> bit) & 1;
        bool ok = false;

        for (int a = 0; a < 2; ++a)
            for (int b = 0; b < 2; ++b)
                for (int c = 0; c < 2; ++c)
                    if (((a & b) == bx) && ((b & c) == by) && ((a & c) == bz))
                        ok = true;

        if (!ok) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << (possible(x, y, z) ? "YES" : "NO") << "\n";
    }
    return 0;
}
