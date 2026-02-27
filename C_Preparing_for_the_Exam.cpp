#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using si = set<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define endl '\n'  
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vi a(m);
    for(int i=0;i<m;i++) cin>>a[i];
    vi v(k);
    for(int i=0;i<k;i++) cin>>v[i];
    if (k < n - 1) {
        for(int i=0; i<m; i++) cout << '0';
        cout << endl;
        return;
    }
    if (k == n) {
        for(int i=0; i<m; i++) cout << '1';
        cout << endl;
        return;
    }
    for(int i = 0; i < m; i++) {
        if (!binary_search(all(v), a[i])) {
            cout << '1';
        } else {
            cout << '0';
        }
    }
    cout << endl;

}

int main() {
    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}