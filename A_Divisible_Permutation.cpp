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
    ll n;
    cin>>n;
    vi p;
    p.pb(1);
    p.pb(n);
    si used;
        used.insert(1);
        used.insert(n);
    for (int i = n - 2; i > 0; i--) {
            int prev = p.back();

            if (prev - i >= 1 && prev - i <= n && !used.count(prev - i)) {
                p.pb(prev - i);
                used.insert(prev - i);
            } else {
                p.pb(prev + i);
                used.insert(prev + i);
            }
        }

        reverse(all(p));
        for (int x : p) cout << x << " ";
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