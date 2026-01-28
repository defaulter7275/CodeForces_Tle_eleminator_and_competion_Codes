#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
 int n, q;
    cin >> n >> q;
    vector<long long> a(n + 1), b(n + 1);
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i = 1; i <= n; i++) cin>>b[i];
    vector<long long> mx(n + 2, 0);
    for (int i=n; i>=1;i--) {
        mx[i]= max({a[i], b[i], mx[i + 1]});
    }
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + mx[i];
    }    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << (q == 0 ? "" : " ");
    }
    cout << endl;
    }
    return 0;
}