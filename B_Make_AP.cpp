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
    ll a,b,c;
    cin>>a>>b>>c;
    bool ok = false;
        ll x = 2*b - c;
        if (x > 0 && x % a == 0) ok = true;
        ll y = a + c;
        if (y % 2 == 0) {
            ll mid = y / 2;
            if (mid > 0 && mid % b == 0) ok = true;
        }
        ll z = 2*b - a;
        if (z > 0 && z % c == 0) ok = true;

        cout << (ok ? "YES\n" : "NO\n");
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