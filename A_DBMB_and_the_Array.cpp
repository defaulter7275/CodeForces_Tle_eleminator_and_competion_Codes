#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;

        int curr = 0;
        for(int i = 0; i < n; i++) {
            int val;
            cin >> val;
            curr += val;
        }

        if (s >= curr && (s - curr) % x == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}