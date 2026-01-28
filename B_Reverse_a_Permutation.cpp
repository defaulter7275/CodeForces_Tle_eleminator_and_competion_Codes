#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    if(!(cin >> n)) return;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<ll> suffix(n);
    vector<int> sIndex(n);

    suffix[n-1] = a[n-1];
    sIndex[n-1] = n-1;

    for(int i = n-2; i >= 0; i--) {
        if(a[i] >= suffix[i+1]) {
            suffix[i] = a[i];
            sIndex[i] = i;
        } else {
            suffix[i] = suffix[i+1];
            sIndex[i] = sIndex[i+1];
        }
    }

    for(int i = 0; i < n; i++) {
        if(suffix[i] > a[i]) {
            reverse(a.begin() + i, a.begin() + sIndex[i] + 1);
            break;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << (i == n-1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}