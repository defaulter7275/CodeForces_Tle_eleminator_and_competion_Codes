#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int x;
        cin >> x;

        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());

        if (x >= mn && x <= mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
