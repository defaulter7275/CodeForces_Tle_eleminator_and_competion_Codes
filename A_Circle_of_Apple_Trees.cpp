#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        unordered_set<int> distinct(b.begin(), b.end());
        cout << distinct.size() << "\n";
    }

    return 0;
}
